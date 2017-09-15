#!/bin/bash

# Script to run angelix on subjects in codeflaws directory
#The following variables needs to be changed:
rootdir="/home/ubuntu/codeforces-crawler/CodeforcesSpider" #directory of this script
versiondir="$rootdir/codeflaws"  # directory where the codeflaws.tar.gz is extracted
filename="$rootdir/run1"  # should be a copy of the codeflaws-defect-detail-info.txt, or select several defects from codeflaws-defect-detail-info.txt
currentTime=$(date +"%Y-%m-%d-%H-%M-%S")
rundir="$rootdir/angelix-run-$currentTime"  # Directory for running the test script, a temporary needed to be created as an output directory where everything will be copied to during the repair
angelixexperimentsdir="/home/ubuntu/angelix-experiments" # directory in which angelix is called from
log_file="$rundir/test-results.log"  # Log file for result summary

ignore_file="$rootdir/versions-ignored-all.txt"  # File contains list of subjects to be ignored
angelix_backend_klee_out_0="$angelixexperimentsdir/.angelix/backend/klee-out-0"
runNewSynthesizer=""  # To store if --use-nsynth option is enabled [applicable to angelix]
runVerbose=""  # Change to "--verbose" if need to run angelix in verbose
makeErrorList="$rundir/make-error-list.txt"  # To store versions which need to be re-run


# Read arguments
if [ $# -lt 1 ]; then
  echo -e "Usage: $0 <filename> [--use-nsynth]\n"
  echo "<filename>       Input file contains subjects/versions"
  echo "[--use-nsynth]   Use new synthesizer in angelix"
  exit 1
else
  # Get the filename
  filename="$1"
  echo -e "File: $1"
  # Check if filename is existent
  if ! [ -e $filename ]; then
    echo -e "Error: $filename - no such file!"
    exit 1
  fi

  # Read second argument ($2), if not empty
  if [ "$2" == "--use-nsynth" ]; then
    runNewSynthesizer="--use-nsynth"
    echo -e "$2 option enabled.\n"
  fi
fi


# Create directory for angelix-run, if not existent
if ! [ -d "$rundir" ]; then
  mkdir $rundir
  echo -e "Running directory: $rundir\n"
fi

# Create directory for patches
if ! [ -d "$rundir/patches" ]; then
  mkdir $rundir/patches
fi


# Write header for log file
echo -e "NOTE:" >> $log_file
echo -e "Defect Group 1: if-conditions, loop-conditions, assignments\nDefect Group 2: guards" >> $log_file
echo -e "NUM1 => Defect Group 1 or 2    NUM2 => Angelix Group Size\nExample[NUM1-NUM2]: 1-6 means Defect Group 1, Angelix Group Size 6" >> $log_file
echo -e "If 'Defect>1' is NO: (1) => 1-1    (2) => 2-1" >> $log_file
echo -e "If 'Defect>1' is YES:(1) => 1-1    (2) => 1-6    (3) => 2-1    (4) => 2-6" >> $log_file
echo -e "E.g. If 'Defect>1' is NO, Time(2) means time for running Angelix with Defect Group 2 and Group Size 1 or 2-1" >> $log_file
echo -e "     If 'Defect>1' is YES, Time(2) means time for running Angelix with Defect Group 1 and Group Size 6 or 1-6\n" >> $log_file
echo -e "Version   Angelix   Patch File   Time(1)   Time(2)   Time(3)   Time(4)   Synthesis(1)   Synthesis(2)   Synthesis(3)   Synthesis(4)   Patched   Golden   Result   Remarks(1)   Remarks(2)   Remarks(4)   Remarks(4)   Defect>1" >> $log_file
echo -e "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" >> $log_file


# Options for angelix
TIMEOUT=3600  # sec
GROUP_SIZE=1
KLEE_SOLVER_TIMEOUT=20  # sec
KLEE_TIMEOUT=300  # sec
KLEE_MAX_FORKS=500
SYNTHESIS_TIMEOUT=100000  # msec


add-header() {
  local file=$1
  sed -i '1s/^/#ifndef ANGELIX_OUTPUT\n/' "$file"
  sed -i '2s/^/#define ANGELIX_OUTPUT(type, expr, id) expr\n/' "$file"
  sed -i '3s/^/#define ANGELIX_REACHABLE(id)\n/' "$file"
  sed -i '4s/^/#endif\n/' "$file"
  # Insert this function so as to use angelix_ignore1 on a statement where instrumentation
  # on that statement will be ignored by angelix [Commented: Not needed now]
  #sed -i '5s/^/int angelix_ignore1(int x) {return x;}\n/' "$file"
}


subjectCount=0
runCount=0
ignoreCount=0
makeErrorCount=0
defectHasComma=0  # 0 means using group size 1, 1 means using group size 6 if size 1 fails


while IFS=$'\t' read -r line defect verdict; do
if [[ "$line" == *"-bug-"* ]]; then
  version=$line
  subjectCount=$((subjectCount+1))  # Keep track no. of subjects read from file

  # Running the subject version if it is not in ignore-list
  if ! grep -q "$version" $ignore_file; then

    # Get buggy filename from directory name
    contestnum=$(echo $version | cut -d$'-' -f1)
    probnum=$(echo $version | cut -d$'-' -f2)
    buggyfile=$(echo $version | cut -d$'-' -f4)
    goldenfile=$(echo $version | cut -d$'-' -f5)
    bfile=$(echo "$contestnum-$probnum-$buggyfile".c)   # Buggy file
    gfile=$(echo "$contestnum-$probnum-$goldenfile".c)  # Golden file
    echo -e "\n### Running version: $version"
    DIRECTORY="$versiondir/$version"
    if [ ! -d "$DIRECTORY" ]; then
      echo "### ERROR: FOLDER $DIRECTORY DOESN'T EXIST"
      continue
    fi

    # Check if there is comma in its defect list ['xxx', 'yyy']
    # Note that the version with comma in its defect list will run a group size of 1 and 6
    if [[ "$defect" == *","* ]]; then
      defectHasComma=1
    else
      defectHasComma=0
    fi

    # Clone the each version directory into 2 directories (buggy-version and golden-version)
    VERSION_DIR=$rundir/$version
    BUGGY_DIR=$VERSION_DIR/$contestnum-$probnum-$buggyfile-buggy
    GOLDEN_DIR=$VERSION_DIR/$contestnum-$probnum-$goldenfile-golden
    mkdir $VERSION_DIR
    mkdir $BUGGY_DIR
    mkdir $GOLDEN_DIR
    cp -r $DIRECTORY/* $BUGGY_DIR
    cp -r $DIRECTORY/* $GOLDEN_DIR
    
    # Copy the code file as back up (*.original) before instrumentation
    cp $BUGGY_DIR/$bfile $BUGGY_DIR/$bfile.original
    cp $GOLDEN_DIR/$gfile $GOLDEN_DIR/$gfile.original

    # Insert additional definition into the code file
    add-header $BUGGY_DIR/$bfile
    add-header $GOLDEN_DIR/$gfile
 
    # Instrument the printf using instrument-printf command 
    #echo "+++ Instrumenting printf: $bfile"
    #$instrumentprintf $BUGGY_DIR/$bfile --
    #echo "+++ Instrumenting printf: $gfile"
    #$instrumentprintf $GOLDEN_DIR/$gfile -- 
    
    # Rename the golden file to buggy filename in golden directory [!!! Ensure the correct instrumented golden code file is used]
    echo -e "+++ Renaming \"$GOLDEN_DIR/$gfile\" to \"$GOLDEN_DIR/$bfile\""
    mv $GOLDEN_DIR/$gfile $GOLDEN_DIR/$bfile

    # Make/build the programs in buggy and golden version 
    makeBuggyPassed=0
    makeGoldenPassed=0
    cd $BUGGY_DIR
    make
    if [ "$?" -ne 0 ]; then
      echo -e "+++ Make failed at buggy version\n"
      makeBuggyPassed=0
    else
      echo -e "+++ Make passed at buggy version\n"
      makeBuggyPassed=1
    fi
    cd $GOLDEN_DIR
    make
    if [ "$?" -ne 0 ]; then
      echo -e "+++ Make failed at golden version\n"
      makeGoldenPassed=0
    else
      echo -e "+++ Make passed at golden version\n"
      makeGoldenPassed=1
    fi

    # Skip running this version if there is any make error
    if [ $makeBuggyPassed == 0 ] || [ $makeGoldenPassed == 0 ]; then
      echo -e "$version\tMAKE ERROR\t" >> $log_file
      # Append this version to rurun list for later fix and re-run
      echo -e "$version\t$defect\t$verdict" >> $makeErrorList
      makeErrorCount=$((makeErrorCount+1))
      continue
    fi

    # Retrieve test cases from test-angelix.sh
    testAngelix="$BUGGY_DIR/test-angelix.sh"
    positiveCases=($(grep -E "p[0-9]+\)" $testAngelix | cut -d')' -f 1))
    negativeCases=($(grep -E "n[0-9]+\)" $testAngelix | cut -d')' -f 1))
    buggyTestCases=""
    for p in "${positiveCases[@]}"
    do
       buggyTestCases+="$p "
    done
    for n in "${negativeCases[@]}"
    do
       buggyTestCases+="$n "
    done

    # Retrieve test cases from test-valid.sh
    testAngelixValid="$BUGGY_DIR/test-valid.sh"
    goldenPositiveCases=($(grep -E "p[0-9]+\)" $testAngelixValid | cut -d')' -f 1))
    goldenNegativeCases=($(grep -E "n[0-9]+\)" $testAngelixValid | cut -d')' -f 1))
    goldenTestCases=""
    for p in "${goldenPositiveCases[@]}"
    do
       goldenTestCases+="$p "
    done
    #for n in "${goldenNegativeCases[@]}"  # Commented: No need -ve case as it is part of +ve cases
    #do
    #   goldenTestCases+="$n "
    #done
    #echo "+++ Golden test cases: $goldenTestCases"

     
    # For debugging purpose
    #sed -i "2i echo \"Test Angelix: Current Directory: $\(pwd\)\"" $GOLDEN_DIR/test-angelix.sh
    #sed -i "2i echo \"Test Angelix: Current Directory: $\(pwd\)\"" $BUGGY_DIR/test-angelix.sh


    # Run angelix using options
    # Go to ~/angelix-experiments directory
    cd $angelixexperimentsdir
    
    # Run buggy version with Group 1 [defect class: if-conditions, loop-conditions, assignments]
    ANGELIX_RUN_OUTPUT_1=$VERSION_DIR/$contestnum-$probnum-$buggyfile-$goldenfile.out-1
    ANGELIX_RUN_OUTPUT_2=$VERSION_DIR/$contestnum-$probnum-$buggyfile-$goldenfile.out-2
    ANGELIX_RUN_OUTPUT_3=$VERSION_DIR/$contestnum-$probnum-$buggyfile-$goldenfile.out-3
    ANGELIX_RUN_OUTPUT_4=$VERSION_DIR/$contestnum-$probnum-$buggyfile-$goldenfile.out-4

    success=0
    resultStr=""
    timeStr1="----"
    timeStr2="----"
    timeStr3="----"
    timeStr4="----"
    synthesisLevel1="----"
    synthesisLevel2="----"
    synthesisLevel3="----"
    synthesisLevel4="----"
    byteCount=0
    angelixVerdict="----"
    patchFile="----"
    defectMoreThanOne="NO"
    isTimeOut1=0
    isTimeOut2=0
    isTimeOut3=0
    isTimeOut4=0

    if [ $defectHasComma -eq 0 ]; then  # No comma found in defect category, run with only GROUP_SIZE=1
      defectMoreThanOne="NO"
      GROUP_SIZE=1
      echo -e "\n+++ Running angelix with defect Group 1, group size = $GROUP_SIZE"
      echo -e "\n+++ Running angelix with defect Group 1, group size = $GROUP_SIZE" >> $ANGELIX_RUN_OUTPUT_1
      set -x  # Activate debugging to display executed command
      angelix $BUGGY_DIR $bfile $BUGGY_DIR/test-angelix.sh $buggyTestCases --golden $GOLDEN_DIR --localize-from-bottom --defect 'if-conditions' 'loop-conditions' 'assignments' --synthesis-levels 'alternatives' 'variables' 'extended-arithmetic' 'extended-logic' 'extended-inequalities' 'mixed-conditional' 'conditional-arithmetic' --timeout $TIMEOUT --group-size $GROUP_SIZE --synthesis-global-vars --synthesis-func-params --synthesis-used-vars --klee-solver-timeout $KLEE_SOLVER_TIMEOUT --klee-timeout $KLEE_TIMEOUT --klee-max-forks $KLEE_MAX_FORKS --synthesis-timeout $SYNTHESIS_TIMEOUT $runNewSynthesizer $runVerbose --configure "make clean" &>> $ANGELIX_RUN_OUTPUT_1
      set +x  # Stop debugging from here
      # Kill these processes, in case they are still running
      pkill klee
      pkill z3
      pkill angelix
      pkill $contestnum-$probnum-$buggyfile
      # Set directory ~/angelix-experiment/.angelix/backend/klee-out-0 permission to 775
      # to prevent PermissionError
      sleep 5
      if [ -d "$angelix_backend_klee_out_0" ]; then
        chmod 775 $angelix_backend_klee_out_0
      fi

      # For debugging purpose
      cp -r $angelixexperimentsdir/.angelix/frontend $VERSION_DIR/frontend1
      #cp $angelixexperimentsdir/.angelix/angelix.log $VERSION_DIR/angelix1.log
      cp $angelixexperimentsdir/.angelix/statistics.json $VERSION_DIR/statistics1.json

      
      # Get test results (from 1st angelix run)
      # Copy the patch if it is a success
      if [ -e $ANGELIX_RUN_OUTPUT_1 ] && tail -1 $ANGELIX_RUN_OUTPUT_1 | grep -q "SUCCESS"; then
        # If a patch is successfully generated
        if tail $ANGELIX_RUN_OUTPUT_1 | grep -q "patch successfully generated"; then
          # Get time elapse
          timeStr1=$(tail $ANGELIX_RUN_OUTPUT_1 | grep " generated in " | cut -d '(' -f1 | sed -e "s/INFO//" | sed -e "s/ *//" | sed -e "s/repair//" | sed -e "s/ *//" | sed -e "s/patch successfully generated in //")
          # Get patch file
          patchFile=$(tail $ANGELIX_RUN_OUTPUT_1 | grep "see $contestnum-$probnum-$buggyfile" | cut -d'(' -f2 | sed -e 's/^see //' | sed -e 's/)//')
          # Move the patch to respective version directory
          mv $angelixexperimentsdir/$patchFile $rundir/patches
          byteCount=$(wc -c $rundir/patches/$patchFile | cut -d' ' -f1)
          if [ $byteCount -le 0 ]; then
            success=0
            # Patch is empty
            angelixVerdict="EMPTY PATCH(1)"
            echo "+++ Angelix: EMPTY PATCH"
          else
            success=1
            angelixVerdict="SUCCESS(1)"
            echo "+++ Angelix: SUCCESS"
          fi
          echo "+++ Patch: $patchFile ($byteCount byte(s))."
        fi
      else # Fail in defect group 1, run angelix with defect group 2 (SECOND RUN)
        # Get time elapse for earlier angelix run output
        if [ -e $ANGELIX_RUN_OUTPUT_1 ] && tail $ANGELIX_RUN_OUTPUT_1 | grep -q " generated in "; then
          timeStr1=$(grep "no patch generated in" $ANGELIX_RUN_OUTPUT_1 | tail -1 | awk '{out=$7; for(i=8;i<=NF;++i){out=out" "$i}; print out}')
          echo "+++ Angelix: FAIL"
        fi
        # Check if there is any TIMEOUT in earlier angelix run output
        if [ -e $ANGELIX_RUN_OUTPUT_1 ] && tail $ANGELIX_RUN_OUTPUT_1 | grep -q "TIMEOUT"; then
          isTimeOut1=1
          echo "+++ Angelix: TIMEOUT"
        fi

        # Run buggy version with Group 2 [defect class: guards]
        echo -e "\n+++ Running angelix with defect Group 2, group size = $GROUP_SIZE"
        echo -e "\n+++ Running angelix with defect Group 2, group size = $GROUP_SIZE" >> $ANGELIX_RUN_OUTPUT_2
        set -x  # Activate debugging to display executed command
        angelix $BUGGY_DIR $bfile $BUGGY_DIR/test-angelix.sh $buggyTestCases --golden $GOLDEN_DIR --localize-from-bottom --defect 'guards' --synthesis-levels 'alternatives' 'variables' 'extended-arithmetic' 'extended-logic' 'extended-inequalities' 'mixed-conditional' 'conditional-arithmetic' --timeout $TIMEOUT --group-size $GROUP_SIZE --synthesis-global-vars --synthesis-func-params --synthesis-used-vars --klee-solver-timeout $KLEE_SOLVER_TIMEOUT --klee-timeout $KLEE_TIMEOUT --klee-max-forks $KLEE_MAX_FORKS --synthesis-timeout $SYNTHESIS_TIMEOUT $runNewSynthesizer $runVerbose --configure "make clean" &>> $ANGELIX_RUN_OUTPUT_2
        set +x  # Stop debugging from here
        
        # Kill these processes, in case they are still running
        pkill klee
        pkill z3
        pkill angelix
        pkill $contestnum-$probnum-$buggyfile
        # Set directory ~/angelix-experiment/.angelix/backend/klee-out-0 permission to 775
        # to prevent PermissionError
        sleep 5
        if [ -d "$angelix_backend_klee_out_0" ]; then
          chmod 775 $angelix_backend_klee_out_0
        fi

        # For debugging purpose
        cp -r $angelixexperimentsdir/.angelix/frontend $VERSION_DIR/frontend2
        #cp $angelixexperimentsdir/.angelix/angelix.log $VERSION_DIR/angelix2.log
        cp $angelixexperimentsdir/.angelix/statistics.json $VERSION_DIR/statistics2.json
       
        # If a patch is successfully generated
        if [ -e $ANGELIX_RUN_OUTPUT_2 ] && tail $ANGELIX_RUN_OUTPUT_2 | grep -q "patch successfully generated"; then
          # Get time elapse
          timeStr2=$(tail $ANGELIX_RUN_OUTPUT_2 | grep " generated in " | cut -d '(' -f1 | sed -e "s/INFO//" | sed -e "s/ *//" | sed -e "s/repair//" | sed -e "s/ *//" |sed -e "s/patch successfully generated in //")
          # Get patch file
          patchFile=$(tail $ANGELIX_RUN_OUTPUT_2 | grep "see $contestnum-$probnum-$buggyfile" | cut -d'(' -f2 | sed -e 's/^see //' | sed -e 's/)//')
          # Move the patch to respective version directory
          mv $angelixexperimentsdir/$patchFile $rundir/patches
          byteCount=$(wc -c $rundir/patches/$patchFile | cut -d' ' -f1)
          if [ $byteCount -le 0 ]; then
            success=0
            # Patch is empty
            angelixVerdict="EMPTY PATCH(2)"
            echo "+++ Angelix: EMPTY PATCH"
          else
            success=1
            angelixVerdict="SUCCESS(2)"
            echo "+++ Angelix: SUCCESS"
          fi
          echo "+++ Patch: $patchFile ($byteCount byte(s))."
        else  # Worst case: if both Group 1 and 2 run fail
          if [ -e $ANGELIX_RUN_OUTPUT_2 ] && tail $ANGELIX_RUN_OUTPUT_2 | grep -q " generated in "; then
            timeStr2=$(grep "no patch generated in" $ANGELIX_RUN_OUTPUT_2 | tail -1 | awk '{out=$7; for(i=8;i<=NF;++i){out=out" "$i}; print out}')
            echo "+++ Angelix: FAIL"
          fi
          # Check if there is any TIMEOUT in earlier angelix run output
          if [ -e $ANGELIX_RUN_OUTPUT_2 ] && tail $ANGELIX_RUN_OUTPUT_2 | grep -q "TIMEOUT"; then
            isTimeOut2=1
            echo "+++ Angelix: TIMEOUT"
          fi
          if [ $isTimeOut1 == 1 ] && [ $isTimeOut2 == 1 ]; then
            angelixVerdict="TIMEOUT(2)"  # If both angelix runs experience timeout
          else
            angelixVerdict="FAIL(2)"
          fi
        fi
      fi
    else # There is a comma in corresponding defect category [Running sequence("defectGroup-groupSize"): 1-1, 1-6, 2-1, 2-6]
      defectMoreThanOne="YES"
      # (1) angelix run with defect group 1 and group size 1
      GROUP_SIZE=1
      echo -e "\n+++ Running angelix with defect Group 1, group size = $GROUP_SIZE"
      echo -e "\n+++ Running angelix with defect Group 1, group size = $GROUP_SIZE" >> $ANGELIX_RUN_OUTPUT_1
      set -x  # Activate debugging to display executed command
      angelix $BUGGY_DIR $bfile $BUGGY_DIR/test-angelix.sh $buggyTestCases --golden $GOLDEN_DIR --localize-from-bottom --defect 'if-conditions' 'loop-conditions' 'assignments' --synthesis-levels 'alternatives' 'variables' 'extended-arithmetic' 'extended-logic' 'extended-inequalities' 'mixed-conditional' 'conditional-arithmetic' --timeout $TIMEOUT --group-size $GROUP_SIZE --synthesis-global-vars --synthesis-func-params --synthesis-used-vars --klee-solver-timeout $KLEE_SOLVER_TIMEOUT --klee-timeout $KLEE_TIMEOUT --klee-max-forks $KLEE_MAX_FORKS --synthesis-timeout $SYNTHESIS_TIMEOUT $runNewSynthesizer $runVerbose --configure "make clean" &>> $ANGELIX_RUN_OUTPUT_1
      set +x  # Stop debugging from here

      # Kill these processes, in case they are still running
      pkill klee
      pkill z3
      pkill angelix
      pkill $contestnum-$probnum-$buggyfile
      # Set directory ~/angelix-experiment/.angelix/backend/klee-out-0 permission to 775
      # to prevent PermissionError
      sleep 5
      if [ -d "$angelix_backend_klee_out_0" ]; then
        chmod 775 $angelix_backend_klee_out_0
      fi
      
      # For debugging purpose
      cp -r $angelixexperimentsdir/.angelix/frontend $VERSION_DIR/frontend1
      #cp $angelixexperimentsdir/.angelix/angelix.log $VERSION_DIR/angelix1.log
      cp $angelixexperimentsdir/.angelix/statistics.json $VERSION_DIR/statistics1.json

      # Get test results
      # Copy the patch if it is a success
      if [ -e $ANGELIX_RUN_OUTPUT_1 ] && tail -1 $ANGELIX_RUN_OUTPUT_1 | grep -q "SUCCESS"; then
        # If a patch is successfully generated
        if tail $ANGELIX_RUN_OUTPUT_1 | grep -q "patch successfully generated"; then
          # Get time elapse
          timeStr1=$(tail $ANGELIX_RUN_OUTPUT_1 | grep " generated in " | cut -d '(' -f1 | sed -e "s/INFO//" | sed -e "s/ *//" | sed -e "s/repair//" | sed -e "s/ *//" | sed -e "s/patch successfully generated in //")
          # Get patch file
          patchFile=$(tail $ANGELIX_RUN_OUTPUT_1 | grep "see $contestnum-$probnum-$buggyfile" | cut -d'(' -f2 | sed -e 's/^see //' | sed -e 's/)//')
          # Move the patch to respective version directory
          mv $angelixexperimentsdir/$patchFile $rundir/patches
          byteCount=$(wc -c $rundir/patches/$patchFile | cut -d' ' -f1)
          if [ $byteCount -le 0 ]; then
            success=0
            # Patch is empty
            angelixVerdict="EMPTY PATCH(1)"
            echo "+++ Angelix: EMPTY PATCH"
          else
            success=1
            angelixVerdict="SUCCESS(1)"
            echo "+++ Angelix: SUCCESS"
          fi
          echo "+++ Patch: $patchFile ($byteCount byte(s))."
        fi
      else # Fail in defect group 1 with group size 1, run angelix with defect group 1 with group size 6
        # (2) angelix run with defect group 1 and group size 6 (if (1) fails)
        GROUP_SIZE=6
        # Get time elapse for earlier angelix run output
        if [ -e $ANGELIX_RUN_OUTPUT_1 ] && tail $ANGELIX_RUN_OUTPUT_1 | grep -q " generated in "; then
          timeStr1=$(grep "no patch generated in" $ANGELIX_RUN_OUTPUT_1 | tail -1 | awk '{out=$7; for(i=8;i<=NF;++i){out=out" "$i}; print out}')
          echo "+++ Angelix: FAIL"
        fi
        # Check if there is any TIMEOUT in earlier angelix run output
        if [ -e $ANGELIX_RUN_OUTPUT_1 ] && tail $ANGELIX_RUN_OUTPUT_1 | grep -q "TIMEOUT"; then
          isTimeOut1=1
          echo "+++ Angelix: TIMEOUT"
        fi

        # Run buggy version with Group 1, group size 6 [defect class: if-conditions, loop-conditions, assignments]
        echo -e "\n+++ Running angelix with defect Group 1, group size = $GROUP_SIZE"
        echo -e "\n+++ Running angelix with defect Group 1, group size = $GROUP_SIZE" >> $ANGELIX_RUN_OUTPUT_2
        set -x  # Activate debugging to display executed command
        angelix $BUGGY_DIR $bfile $BUGGY_DIR/test-angelix.sh $buggyTestCases --golden $GOLDEN_DIR --localize-from-bottom --defect 'if-conditions' 'loop-conditions' 'assignments' --synthesis-levels 'alternatives' 'variables' 'extended-arithmetic' 'extended-logic' 'extended-inequalities' 'mixed-conditional' 'conditional-arithmetic' --timeout $TIMEOUT --group-size $GROUP_SIZE --synthesis-global-vars --synthesis-func-params --synthesis-used-vars --klee-solver-timeout $KLEE_SOLVER_TIMEOUT --klee-timeout $KLEE_TIMEOUT --klee-max-forks $KLEE_MAX_FORKS --synthesis-timeout $SYNTHESIS_TIMEOUT $runNewSynthesizer $runVerbose --configure "make clean" &>> $ANGELIX_RUN_OUTPUT_2
        set +x  # Stop debugging from here

        # Kill these processes, in case they are still running
        pkill klee
        pkill z3
        pkill angelix
        pkill $contestnum-$probnum-$buggyfile
        # Set directory ~/angelix-experiment/.angelix/backend/klee-out-0 permission to 775
        # to prevent PermissionError
        sleep 5
        if [ -d "$angelix_backend_klee_out_0" ]; then
          chmod 775 $angelix_backend_klee_out_0
        fi

        # For debugging purpose
        cp -r $angelixexperimentsdir/.angelix/frontend $VERSION_DIR/frontend2
        #cp $angelixexperimentsdir/.angelix/angelix.log $VERSION_DIR/angelix2.log
        cp $angelixexperimentsdir/.angelix/statistics.json $VERSION_DIR/statistics2.json
       
        # If a patch is successfully generated 
        if [ -e $ANGELIX_RUN_OUTPUT_2 ] && tail $ANGELIX_RUN_OUTPUT_2 | grep -q "patch successfully generated"; then
          # Get time elapse
          timeStr2=$(tail $ANGELIX_RUN_OUTPUT_2 | grep " generated in " | cut -d '(' -f1 | sed -e "s/INFO//" | sed -e "s/ *//" | sed -e "s/repair//" | sed -e "s/ *//" |sed -e "s/patch successfully generated in //")
          # Get patch file
          patchFile=$(tail $ANGELIX_RUN_OUTPUT_2 | grep "see $contestnum-$probnum-$buggyfile" | cut -d'(' -f2 | sed -e 's/^see //' | sed -e 's/)//')
          # Move the patch to respective version directory
          mv $angelixexperimentsdir/$patchFile $rundir/patches
          byteCount=$(wc -c $rundir/patches/$patchFile | cut -d' ' -f1)
          if [ $byteCount -le 0 ]; then
            success=0
            # Patch is empty
            angelixVerdict="EMPTY PATCH(2)"
            echo "+++ Angelix: EMPTY PATCH"
          else
            success=1
            angelixVerdict="SUCCESS(2)"
            echo "+++ Angelix: SUCCESS"
          fi
          echo "+++ Patch: $patchFile ($byteCount byte(s))."
        else  # Run defect group 2 ['guards']
          # (3) Run angelix with defect group 2 and group size 1 (if (2) fails)
          GROUP_SIZE=1
          # Get time elapse for earlier angelix run output
          if [ -e $ANGELIX_RUN_OUTPUT_2 ] && tail $ANGELIX_RUN_OUTPUT_2 | grep -q " generated in "; then
            timeStr2=$(grep "no patch generated in" $ANGELIX_RUN_OUTPUT_2 | tail -1 | awk '{out=$7; for(i=8;i<=NF;++i){out=out" "$i}; print out}')
            echo "+++ Angelix: FAIL"
          fi
          # Check if there is any TIMEOUT in earlier angelix run output
          if [ -e $ANGELIX_RUN_OUTPUT_2 ] && tail $ANGELIX_RUN_OUTPUT_2 | grep -q "TIMEOUT"; then
            isTimeOut2=1
            echo "+++ Angelix: TIMEOUT"
          fi
          
          # Run buggy version with Group 2, group size 1 [defect class: guards]
          echo -e "\n+++ Running angelix with defect Group 2, group size = $GROUP_SIZE"
          echo -e "\n+++ Running angelix with defect Group 2, group size = $GROUP_SIZE" >> $ANGELIX_RUN_OUTPUT_3
          set -x  # Activate debugging to display executed command
          angelix $BUGGY_DIR $bfile $BUGGY_DIR/test-angelix.sh $buggyTestCases --golden $GOLDEN_DIR --localize-from-bottom --defect 'guards' --synthesis-levels 'alternatives' 'variables' 'extended-arithmetic' 'extended-logic' 'extended-inequalities' 'mixed-conditional' 'conditional-arithmetic' --timeout $TIMEOUT --group-size $GROUP_SIZE --synthesis-global-vars --synthesis-func-params --synthesis-used-vars --klee-solver-timeout $KLEE_SOLVER_TIMEOUT --klee-timeout $KLEE_TIMEOUT --klee-max-forks $KLEE_MAX_FORKS --synthesis-timeout $SYNTHESIS_TIMEOUT $runNewSynthesizer $runVerbose --configure "make clean" &>> $ANGELIX_RUN_OUTPUT_3
          set +x  # Stop debugging from here

          # Kill these processes, in case they are still running
          pkill klee
          pkill z3
          pkill angelix
          pkill $contestnum-$probnum-$buggyfile
          # Set directory ~/angelix-experiment/.angelix/backend/klee-out-0 permission to 775
          # to prevent PermissionError
          sleep 5
          if [ -d "$angelix_backend_klee_out_0" ]; then
            chmod 775 $angelix_backend_klee_out_0
          fi

          # For debugging purpose
          cp -r $angelixexperimentsdir/.angelix/frontend $VERSION_DIR/frontend3
          #cp $angelixexperimentsdir/.angelix/angelix.log $VERSION_DIR/angelix3.log
          cp $angelixexperimentsdir/.angelix/statistics.json $VERSION_DIR/statistics3.json
       
          # If a patch is successfully generated 
          if [ -e $ANGELIX_RUN_OUTPUT_3 ] && tail $ANGELIX_RUN_OUTPUT_3 | grep -q "patch successfully generated"; then
            # Get time elapse
            timeStr3=$(tail $ANGELIX_RUN_OUTPUT_3 | grep " generated in " | cut -d '(' -f1 | sed -e "s/INFO//" | sed -e "s/ *//" | sed -e "s/repair//" | sed -e "s/ *//" |sed -e "s/patch successfully generated in //")
            # Get patch file
            patchFile=$(tail $ANGELIX_RUN_OUTPUT_3 | grep "see $contestnum-$probnum-$buggyfile" | cut -d'(' -f2 | sed -e 's/^see //' | sed -e 's/)//')
            # Move the patch to respective version directory
            mv $angelixexperimentsdir/$patchFile $rundir/patches
            byteCount=$(wc -c $rundir/patches/$patchFile | cut -d' ' -f1)
            if [ $byteCount -le 0 ]; then
              success=0
              # Patch is empty
              angelixVerdict="EMPTY PATCH(3)"
              echo "+++ Angelix: EMPTY PATCH"
            else
              success=1
              angelixVerdict="SUCCESS(3)"
              echo "+++ Angelix: SUCCESS"
            fi
            echo "+++ Patch: $patchFile ($byteCount byte(s))."
          else
            # (4) Run angelix with defect group 2 and group size 6 (if (3) fails)
            GROUP_SIZE=6
            # Get time elapse for earlier angelix run output
            if [ -e $ANGELIX_RUN_OUTPUT_3 ] && tail $ANGELIX_RUN_OUTPUT_3 | grep -q " generated in "; then
              timeStr3=$(grep "no patch generated in" $ANGELIX_RUN_OUTPUT_3 | tail -1 | awk '{out=$7; for(i=8;i<=NF;++i){out=out" "$i}; print out}')
              echo "+++ Angelix: FAIL"
            fi
            # Check if there is any TIMEOUT in earlier angelix run output
            if [ -e $ANGELIX_RUN_OUTPUT_3 ] && tail $ANGELIX_RUN_OUTPUT_3 | grep -q "TIMEOUT"; then
              isTimeOut3=1
              echo "+++ Angelix: TIMEOUT"
            fi
            
            # Run buggy version with Group 2, group size 6 [defect class: guards]
            echo -e "\n+++ Running angelix with defect Group 2, group size = $GROUP_SIZE"
            echo -e "\n+++ Running angelix with defect Group 2, group size = $GROUP_SIZE" >> $ANGELIX_RUN_OUTPUT_4
            set -x  # Activate debugging to display executed command
            angelix $BUGGY_DIR $bfile $BUGGY_DIR/test-angelix.sh $buggyTestCases --golden $GOLDEN_DIR --localize-from-bottom --defect 'guards' --synthesis-levels 'alternatives' 'variables' 'extended-arithmetic' 'extended-logic' 'extended-inequalities' 'mixed-conditional' 'conditional-arithmetic' --timeout $TIMEOUT --group-size $GROUP_SIZE --synthesis-global-vars --synthesis-func-params --synthesis-used-vars --klee-solver-timeout $KLEE_SOLVER_TIMEOUT --klee-timeout $KLEE_TIMEOUT --klee-max-forks $KLEE_MAX_FORKS --synthesis-timeout $SYNTHESIS_TIMEOUT $runNewSynthesizer $runVerbose --configure "make clean" &>> $ANGELIX_RUN_OUTPUT_4
            set +x  # Stop debugging from here

            # Kill these processes, in case they are still running
            pkill klee
            pkill z3
            pkill angelix
            pkill $contestnum-$probnum-$buggyfile
            # Set directory ~/angelix-experiment/.angelix/backend/klee-out-0 permission to 775
            # to prevent PermissionError
            sleep 5
            if [ -d "$angelix_backend_klee_out_0" ]; then
              chmod 775 $angelix_backend_klee_out_0
            fi

            # For debugging purpose
            cp -r $angelixexperimentsdir/.angelix/frontend $VERSION_DIR/frontend4
            #cp $angelixexperimentsdir/.angelix/angelix.log $VERSION_DIR/angelix4.log
            cp $angelixexperimentsdir/.angelix/statistics.json $VERSION_DIR/statistics4.json
       
            # If a patch is successfully generated 
            if [ -e $ANGELIX_RUN_OUTPUT_4 ] && tail $ANGELIX_RUN_OUTPUT_4 | grep -q "patch successfully generated"; then
              # Get time elapse
              timeStr4=$(tail $ANGELIX_RUN_OUTPUT_4 | grep " generated in " | cut -d '(' -f1 | sed -e "s/INFO//" | sed -e "s/ *//" | sed -e "s/repair//" | sed -e "s/ *//" |sed -e "s/patch successfully generated in //")
              # Get patch file
              patchFile=$(tail $ANGELIX_RUN_OUTPUT_4 | grep "see $contestnum-$probnum-$buggyfile" | cut -d'(' -f2 | sed -e 's/^see //' | sed -e 's/)//')
              # Move the patch to respective version directory
              mv $angelixexperimentsdir/$patchFile $rundir/patches
              byteCount=$(wc -c $rundir/patches/$patchFile | cut -d' ' -f1)
              if [ $byteCount -le 0 ]; then
                success=0
                # Patch is empty
                angelixVerdict="EMPTY PATCH(4)"
                echo "+++ Angelix: EMPTY PATCH"
              else
                success=1
                angelixVerdict="SUCCESS(4)"
                echo "+++ Angelix: SUCCESS"
              fi
              echo "+++ Patch: $patchFile ($byteCount byte(s))."
            else # After running 4 times of angelix (where all runs fail -  worst case)
              # Get time elapse for earlier angelix run output
              if [ -e $ANGELIX_RUN_OUTPUT_4 ] && tail $ANGELIX_RUN_OUTPUT_4 | grep -q " generated in "; then
                timeStr4=$(grep "no patch generated in" $ANGELIX_RUN_OUTPUT_4 | tail -1 | awk '{out=$7; for(i=8;i<=NF;++i){out=out" "$i}; print out}')
                echo "+++ Angelix: FAIL"
              fi
              # Check if there is any TIMEOUT in earlier angelix run output
              if [ -e $ANGELIX_RUN_OUTPUT_4 ] && tail $ANGELIX_RUN_OUTPUT_4 | grep -q "TIMEOUT"; then
                isTimeOut4=1
                echo "+++ Angelix: TIMEOUT"
              fi
              if [ $isTimeOut1 == 1 ] && [ $isTimeOut2 == 1 ] && [ $isTimeOut3 == 1 ] && [ $isTimeOut4 == 1 ]; then
                angelixVerdict="TIMEOUT(4)"  # If all angelix runs experience timeout
              else
                angelixVerdict="FAIL(4)"  # This means (1), (2), (3), and (4) fail
              fi
            fi
          fi
        fi
      fi 
    fi # end if [ defectHasComma -eq 0 ]

    # Concatenate result string
    resultStr+="$version\t$angelixVerdict\t$patchFile\t$timeStr1\t$timeStr2\t$timeStr3\t$timeStr4\t"


    # Get synthesis level (read the last synthesis level used in each angelix output file)
    if [ -e $ANGELIX_RUN_OUTPUT_1 ] && grep -q "synthesizing patch with component level" $ANGELIX_RUN_OUTPUT_1; then
      synthesisLevel1=$(grep -n "synthesizing patch with component level" $ANGELIX_RUN_OUTPUT_1 | tail -1 | awk '{print $NF}')
    fi
    if [ -e $ANGELIX_RUN_OUTPUT_2 ] && grep -q "synthesizing patch with component level" $ANGELIX_RUN_OUTPUT_2; then
      synthesisLevel2=$(grep -n "synthesizing patch with component level" $ANGELIX_RUN_OUTPUT_2 | tail -1 | awk '{print $NF}')
    fi
    if [ -e $ANGELIX_RUN_OUTPUT_3 ] && grep -q "synthesizing patch with component level" $ANGELIX_RUN_OUTPUT_3; then
      synthesisLevel3=$(grep -n "synthesizing patch with component level" $ANGELIX_RUN_OUTPUT_3 | tail -1 | awk '{print $NF}')
    fi
    if [ -e $ANGELIX_RUN_OUTPUT_4 ] && grep -q "synthesizing patch with component level" $ANGELIX_RUN_OUTPUT_4; then
      synthesisLevel4=$(grep -n "synthesizing patch with component level" $ANGELIX_RUN_OUTPUT_4 | tail -1 | awk '{print $NF}')
    fi
    resultStr+="$synthesisLevel1\t$synthesisLevel2\t$synthesisLevel3\t$synthesisLevel4\t"

    
    # Patched, Golden, and Result Field
    # Validate the patch for all test cases (run test-valid.sh)
    if [ $success -eq 1 ]; then
      echo "+++ Validating patch"
      # Copy the validation program/code out from .angelix/validation
      cp -r $angelixexperimentsdir/.angelix/validation $VERSION_DIR

      # Run test-angelix-valid.sh to check
      pCount=0
      accepted=0
      gCount=0
      for p in "${goldenPositiveCases[@]}"
      do
        # Run test-valid.sh on validation code
        # Go to validation directory
        cd $VERSION_DIR/validation
        validateResult="$(timeout -k 50s 50s $VERSION_DIR/validation/test-valid.sh $p)"
        if echo "$validateResult" | grep -q "Accepted"; then
          accepted=$((accepted+1))
        fi

        # Run test-angelix-valid.sh on golden code
        # Go to golden directory
        cd $VERSION_DIR/$contestnum-$probnum-$goldenfile-golden
        goldenResult="$(timeout -k 50s 50s $VERSION_DIR/$contestnum-$probnum-$goldenfile-golden/test-valid.sh $p)"
        if echo "$goldenResult" | grep -q "Accepted"; then
          gCount=$((gCount+1))
        fi
        pCount=$((pCount+1))
      done
      #echo -e "\n+++ Validation result: $accepted/$pCount"
      
      if [ $accepted -eq $gCount ]; then
        resultStr+="$accepted/$pCount\t$gCount/$pCount\tCORRECT\t"
      else
        resultStr+="$accepted/$pCount\t$gCount/$pCount\tINCORRECT\t"
      fi
    else
      resultStr+="----\t----\t----\t"
    fi 


    # Remarks field
    remarks1=""
    remarks2=""
    remarks3=""
    remarks4=""
    output1_remarks1=""
    output1_remarks2=""
    output1_remarks3=""
    output2_remarks1=""
    output2_remarks2=""
    output2_remarks3=""
    output3_remarks1=""
    output3_remarks2=""
    output3_remarks3=""
    output4_remarks1=""
    output4_remarks2=""
    output4_remarks3=""
    # Read the last third line of angelix run output
    if [ -e $ANGELIX_RUN_OUTPUT_1 ]; then
      if ! grep -q "PermissionError" $ANGELIX_RUN_OUTPUT_1; then
        output1_remarks1=$(tail -n 3 $ANGELIX_RUN_OUTPUT_1 | head -n -2 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
      else
        # To capture any PermissionError resulting from angelix run
        output1_remarks1=$(grep "PermissionError" $ANGELIX_RUN_OUTPUT_1 | tail -1)
      fi
    fi

    if [ -e $ANGELIX_RUN_OUTPUT_2 ]; then
      if ! grep -q "PermissionError" $ANGELIX_RUN_OUTPUT_2; then
        output2_remarks1=$(tail -n 3 $ANGELIX_RUN_OUTPUT_2 | head -n -2 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
      else
        # To capture any PermissionError resulting from angelix run
        output2_remarks1=$(grep "PermissionError" $ANGELIX_RUN_OUTPUT_2 | tail -1) 
      fi
    fi

    if [ -e $ANGELIX_RUN_OUTPUT_3 ]; then
      if ! grep -q "PermissionError" $ANGELIX_RUN_OUTPUT_3; then
        output3_remarks1=$(tail -n 3 $ANGELIX_RUN_OUTPUT_3 | head -n -2 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
      else
        # To capture any PermissionError resulting from angelix run
        output3_remarks1=$(grep "PermissionError" $ANGELIX_RUN_OUTPUT_3 | tail -1) 
      fi
    fi

    if [ -e $ANGELIX_RUN_OUTPUT_4 ]; then
      if ! grep -q "PermissionError" $ANGELIX_RUN_OUTPUT_4; then
        output4_remarks1=$(tail -n 3 $ANGELIX_RUN_OUTPUT_4 | head -n -2 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
      else
        # To capture any PermissionError resulting from angelix run
        output4_remarks1=$(grep "PermissionError" $ANGELIX_RUN_OUTPUT_4 | tail -1) 
      fi
    fi
    # Note: remarks1/2/3/4 will be empty if the ANGELIX_RUN_OUTPUT_1/2/3/4 is empty (non-existent)


    # If any test case fails in golden version (print the last one)
    if [ -e $ANGELIX_RUN_OUTPUT_1 ]; then
      if grep -q "fails in golden version" $ANGELIX_RUN_OUTPUT_1; then
        output1_remarks2=$(grep -n "fails in golden version" $ANGELIX_RUN_OUTPUT_1 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
        # Display if "No negative test exists" is output
        noNegativeStr=$(grep "No negative test exists" $ANGELIX_RUN_OUTPUT_1 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
        if [[ -n "$noNegativeStr" ]]; then
          output1_remarks2+=", $noNegativeStr"
        fi
      fi
    fi 
    
    if [ -e $ANGELIX_RUN_OUTPUT_2 ]; then
      if grep -q "fails in golden version" $ANGELIX_RUN_OUTPUT_2; then
        output2_remarks2=$(grep -n "fails in golden version" $ANGELIX_RUN_OUTPUT_2 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
        # Display if "No negative test exists" is output
        noNegativeStr=$(grep "No negative test exists" $ANGELIX_RUN_OUTPUT_2 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
        if [[ -n "$noNegativeStr" ]]; then
          output2_remarks2+=", $noNegativeStr"
        fi
      fi
    fi

    if [ -e $ANGELIX_RUN_OUTPUT_3 ]; then
      if grep -q "fails in golden version" $ANGELIX_RUN_OUTPUT_3; then
        output3_remarks2=$(grep -n "fails in golden version" $ANGELIX_RUN_OUTPUT_3 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
        # Display if "No negative test exists" is output
        noNegativeStr=$(grep "No negative test exists" $ANGELIX_RUN_OUTPUT_3 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
        if [[ -n "$noNegativeStr" ]]; then
          output3_remarks2+=", $noNegativeStr"
        fi
      fi
    fi

    if [ -e $ANGELIX_RUN_OUTPUT_4 ]; then
      if grep -q "fails in golden version" $ANGELIX_RUN_OUTPUT_4; then
        output4_remarks2=$(grep -n "fails in golden version" $ANGELIX_RUN_OUTPUT_4 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
        # Display if "No negative test exists" is output
        noNegativeStr=$(grep "No negative test exists" $ANGELIX_RUN_OUTPUT_4 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
        if [[ -n "$noNegativeStr" ]]; then
          output4_remarks2+=", $noNegativeStr"
        fi
      fi
    fi
    
    
    # If failed to generate patch or any timeout
    if [ -e $ANGELIX_RUN_OUTPUT_1 ]; then
      if grep -q "failed to generate patch" $ANGELIX_RUN_OUTPUT_1; then
        output1_remarks3=$(grep -n "failed to generate patch" $ANGELIX_RUN_OUTPUT_1 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
      fi
    fi

    if [ -e $ANGELIX_RUN_OUTPUT_2 ]; then
      if grep -q "failed to generate patch" $ANGELIX_RUN_OUTPUT_2; then
        output2_remarks3=$(grep -n "failed to generate patch" $ANGELIX_RUN_OUTPUT_2 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
      fi
    fi

    if [ -e $ANGELIX_RUN_OUTPUT_3 ]; then
      if grep -q "failed to generate patch" $ANGELIX_RUN_OUTPUT_3; then
        output3_remarks3=$(grep -n "failed to generate patch" $ANGELIX_RUN_OUTPUT_3 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
      fi
    fi

    if [ -e $ANGELIX_RUN_OUTPUT_4 ]; then
      if grep -q "failed to generate patch" $ANGELIX_RUN_OUTPUT_4; then
        output4_remarks3=$(grep -n "failed to generate patch" $ANGELIX_RUN_OUTPUT_4 | tail -1 | awk '{out=$3; for(i=4;i<=NF;++i){out=out" "$i}; print out}')
      fi
    fi
    
    
    # Combine all the remarks
    remarks1+="[$output1_remarks1, $output1_remarks2, $output1_remarks3]"
    remarks2+="[$output2_remarks1, $output2_remarks2, $output2_remarks3]"
    remarks3+="[$output3_remarks1, $output3_remarks2, $output3_remarks3]"
    remarks4+="[$output4_remarks1, $output4_remarks2, $output4_remarks3]"

    resultStr+="$remarks1\t$remarks2\t$remarks3\t$remarks4\t$defectMoreThanOne"


    # Append result to log file
    echo -e "$resultStr" >> $log_file
    
    # Remove all angelix run output files [Uncomment lines below if we want to delete]
    #rm $ANGELIX_RUN_OUTPUT_1
    #rm $ANGELIX_RUN_OUTPUT_2
    #rm $ANGELIX_RUN_OUTPUT_3
    #rm $ANGELIX_RUN_OUTPUT_4

    cd $angelixexperimentsdir

    runCount=$((runCount+1))
  else  # version to be ignored
    echo -e "\n### Ignoring version: $version"
    echo -e "$version\tIGNORED\t" >> $log_file
    ignoreCount=$((ignoreCount+1))
  fi  # end if ! grep -q "$version" $ignore_file; then
fi  # if [[ "$line" == *"-bug-"* ]]; then
done < "$filename"

echo -e "\n### Total runs: $runCount, ignored: $ignoreCount, make error: $makeErrorCount"
echo -e "### Total subjects/versions: $subjectCount\n\n### END"
echo -e "\n### Total runs: $runCount, ignored: $ignoreCount, make error: $makeErrorCount" >> $log_file
echo -e "### Total subjects/versions: $subjectCount\n" >> $log_file

