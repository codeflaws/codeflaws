#!/bin/bash
# Script to run spr on subjects in codeflaws directory
#The following variables needs to be changed:
rootdir="/home/ubuntu/codeforces-crawler/CodeforcesSpider" #directory of this script
rundir="$rootdir/genprog-run" # directory in which genprog is called from, a temporary output directory where everything will be copied to during the repair
versiondir="$rootdir/codeflaws" #directory where the codeflaws.tar.gz is extracted
filename="$rootdir/run1" #should be a copy of the codeflaws-defect-detail-info.txt, or select several defects from codeflaws-defect-detail-info.txt
genprog="/home/ubuntu/genprog-source-v3.0/src/repair" # location of the installed genprog

list=$(cut -d$'\t' -f1 $filename)

kill_descendant_processes() {
    local pid="$1"
    local and_self="${2:-false}"
    if children="$(pgrep -P "$pid")"; then
        for child in $children; do
            kill_descendant_processes "$child" true
        done
    fi
    if [[ "$and_self" == true ]]; then
        kill -9 "$pid"
    fi
}

while read -r line; do
if [[ "$line" == *"-bug-"* ]]; then 
  version=$line
  if ! grep -q "$version" $rootdir/versions-ignored-all.txt; then    
    var=$((var+1))
    #get buggy filename from directory name:
    contestnum=$(echo $version | cut -d$'-' -f1) 
    probnum=$(echo $version | cut -d$'-' -f2)
    buggyfile=$(echo $version | cut -d$'-' -f4)
    cfile=$(echo "$contestnum-$probnum-$buggyfile".c)
    cilfile=$(echo "$contestnum-$probnum-$buggyfile".cil.c)
    cfixfile=$(echo "$contestnum-$probnum-$buggyfile"-fix.c)
    echo "Running on version:$version";

    diffc=$(grep "Diff Cases" $versiondir/$version/$cfile.revlog | awk '{print $NF}')
    posc=$(grep "Positive Cases" $versiondir/$version/$cfile.revlog | awk '{print $NF}')

    echo "Diff cases:$diffc:$posc"
    DIRECTORY="$versiondir/$version"
    if [ ! -d "$DIRECTORY" ]; then
      echo "FOLDER DOESNT EXIST: $version"
    fi

    cd $rundir/
    rm -rf $rundir/tempworkdir-$version 
    rm -rf $rundir/tempworkdir-$version-validation
    cp -r $versiondir/$version $rundir/tempworkdir-$version
    cd $rundir/tempworkdir-$version 
    
    cp $rootdir/configuration-default configuration-$version  
    cp $rootdir/compile.pl compile.pl
    echo "$cfile">>bugged-program.txt 
    echo "--pos-tests $posc">>configuration-$version
    echo "--neg-tests $diffc">>configuration-$version  
    rm -rf preprocessed
    rm -rf coverage
    mkdir -p preprocessed
    make CC="cilly" CFLAGS="--save-temps -std=c99 -fno-optimize-sibling-calls -fno-strict-aliasing -fno-asm" &> initialbuild
    if grep -q "Error:" initialbuild; then
       if grep -q "Length of array is not" initialbuild; then
         printf "%s\t%s\t%s\n" "$version" "BUILD:ARRAY BUG" "0s" >> "$rootdir/genprog-summary.log"
       else
       echo "BUILD FAILED"
       printf "%s\t%s\t%s\n" "$version" "BUILDFAILED!" "0s" >> "$rootdir/genprog-summary.log"
       fi
       continue
   fi 
   cp $cilfile preprocessed/$cfile
   cp preprocessed/$cfile $cfile 
   rm -rf coverage
   rm -rf coverage.path.*
   rm -rf repair.cache
   rm -rf repair.debug.*
   echo "RUNNING CMD:$genprog configuration-$version"
   timeout -k 3600s 3600s $genprog configuration-$version &> $rundir/temp-$version.out
   timespent=$(grep "TOTAL" "$rundir/temp-$version.out" | cut -d'=' -f1 | awk '{print $NF}')
   echo "timespent:$timespent"
   if [ -z "${timespent}" ]; then
        printf "%s\t%s\t%s\n" "$version" "TIMEOUT" "3600s" >> "$rootdir/genprog-summary.log"
   fi
   if [ ! -f "$rundir/tempworkdir-$version/build.log" ]
   then
      printf "%s\t%s\t%s\n" "$version" "BUILDFAILED:FILE!" "$timespent" >> "$rootdir/genprog-summary.log"
   fi 
   if grep -q "Failed to make" $rundir/tempworkdir-$version/build.log; then
       echo "BUILD FAILED"
       printf "%s\t%s\t%s\n" "$version" "BUILDFAILED!" "$timespent" >> "$rootdir/genprog-summary.log"
   elif  grep -q "nexpected" "$rundir/temp-$version.out"; then
       echo "Verification failed"
       printf "%s\t%s\t%s\n" "$version" "Verification failed!" "$timespent" >> "$rootdir/genprog-summary.log"
   elif grep -q "Timeout" "$rundir/temp-$version.out"; then
       printf "%s\t%s\t%s\n" "$version" "TIMEOUT" "$timespent" >> "$rootdir/genprog-summary.log"
   elif grep -q "Repair Found" "$rundir/temp-$version.out"; then
           contestnum=$(echo "$version" | cut -d$'-' -f1) 
           probnum=$(echo "$version" | cut -d$'-' -f2)
           buggyfile=$(echo "$version" | cut -d$'-' -f4)
           cfile=$(echo "$contestnum-$probnum-$buggyfile".c)
           cfixfile=$(echo "$version-fix".c) 
           fixf="$rundir/tempworkdir-$version/repair/$cfile"
           #for fixing the asm_booo instruction that GenProg introduced
           sed -i '/booo/d' "$fixf"  
           cp $fixf $rootdir/genprog-allfixes/$cfixfile
           $rootdir/validate-fix-genprog.sh "$version" "$rundir/temp-$version.out" "$rundir/tempworkdir-$version" "$timespent"
           echo "PASS:$passt"
   elif grep -q "no repair" "$rundir/temp-$version.out"; then
           printf "%s\t%s\t%s\n" "$version" "NO" "$timespent" >> "$rootdir/genprog-summary.log"
   elif grep -q "Assertion failed" "$rundir/temp-$version.out"; then
           printf "%s\t%s\t%s\n" "$version" "COVERAGEFAIL" "$timespent" >> "$rootdir/genprog-summary.log"

   fi
      
  else
    echo "IGNORING:$version"  
  fi
 if test -e "$rundir/tempworkdir-$version/bugreport.txt";then
        echo "BUG"
        if grep -q "BOOO" "$rundir/tempworkdir-$version/bugreport.txt"; then
          printf "%s\tBOOOBUG\n" "$version" >> "$rootdir/genprog-bugs.log"
        fi
   fi 
fi
done <<< "$list"
kill_descendant_processes $$
