#!/bin/bash
# Script to run prophet on subjects in codeflaws directory
rootdir="/home/ubuntu/codeforces-crawler/CodeforcesSpider" #directory of this script
rundir="$rootdir/prophet-run" # directory in which prophet is called from
versiondir="$rootdir/codeflaws" #root directory for the codeflaws versions
filename="$rootdir/run1" #tab-separated file containing the list of versions to run as the first field
prophet="/home/ubuntu/spr/src/prophet" # location of the prophet executable
list=$(cut -d$'\t' -f1 $filename)
rundir="$rootdir/prophet-run"
parafile="$rootdir/para-rext-all.out"

while read -r line; do
if [[ "$line" == *"-bug-"* ]]; then 
  version=$line
  if ! grep -q "$version" $rootdir/ignore-list; then
     #get buggy filename from directory name:
     contestnum=$(echo $version | cut -d$'-' -f1) 
     probnum=$(echo $version | cut -d$'-' -f2)
     buggyfile=$(echo $version | cut -d$'-' -f4)
     cfile=$(echo "$contestnum-$probnum-$buggyfile".c)
     cfixfile=$(echo "$contestnum-$probnum-$buggyfile"-fix.c)
     DIRECTORY="$versiondir/$version"
     if [ ! -d "$DIRECTORY" ]; then
        echo "FOLDER DOESNT EXIST: $version"
     fi
    
     echo "Running on version:$version"; 
     cd $rundir 
    
     # create configuration file
     rm -f repair-$version.conf 
     echo "revision_file=$versiondir/$version/$cfile".revlog>>repair-$version.conf 
     echo "src_dir=$versiondir/$version/">>repair-$version.conf 
     echo "test_dir=$versiondir/$version/">>repair-$version.conf 
     echo "dep_dir=">>repair-$version.conf
     echo "build_cmd=$rootdir/code-build.py">>repair-$version.conf  
     echo "test_cmd=$rootdir/run-test.py">>repair-$version.conf
     echo "localizer=profile">>repair-$version.conf
     echo "bugged_file=$cfile">>repair-$version.conf
     echo "fixed_out_file=$cfixfile">>repair-$version.conf
     echo "single_case_timeout=50">>repair-$version.conf
     rm -rf tempworkdir-$version 

     echo "RUNNING CMD:$prophet -r tempworkdir-$version/ -timeout 1"
     `which time` -o time-$version.out -f "%es" timeout -k 3600s 3600s "$prophet" -r tempworkdir-$version/ -feature-para "$parafile" -skip-verify -cond-ext -replace-ext -timeout 1 repair-$version.conf &> temp-$version.out
     timespent=$(cat "$rundir/time-$version.out" | tail -1 | tr -d '\n' | awk '{print $NF}')
     if [ -z "${timespent}" ]; then
         printf "%s\t%s\t%s\n" "$version" "TIMEOUT" "3600s" >> "$rootdir/prophet-summary.log"
     elif grep "Command exited with non-zero status 124" "$rundir/time-$version.out"; then
         printf "%s\t%s\t%s\n" "$version" "TIMEOUT" "3600s" >> "$rootdir/prophet-summary.log"
     fi 
     if grep -q "Failed to make" tempworkdir-$version/build.log; then
        echo "BUILD FAILED"
        printf "%s\t%s\t%s\n" "$version" "BUILDFAILED!" "$timespent" >> "$rootdir/prophet-summary.log"
     elif  grep -q "Verification failed!" temp-$version.out; then
        printf "%s\t%s\n" "$version" "FAILVERIFY">>$rootdir/rerun.log
        if  grep -q "Unexpected pass" temp-$version.out; then
            echo "Unexpected pass"
            printf "%s\t%s\t%s\n" "$version" "Unexpected Pass" "$timespent" >> "$rootdir/prophet-summary.log"
            printf "%s #Unexpected pass\n" "$version" >> $rootdir/ignore-list 
        elif grep -q "Unexpected fail" temp-$version.out; then
            echo "Unexpected fail"
            if tail -n 1 tempworkdir-$version/src/input-pos* | grep -E "\.\.\.$"; then
               printf "%s\t%s\t%s\n" "$version" "DOTDOTFILE" "$timespent" >> "$rootdir/prophet-summary.log"
            fi
        fi
     elif grep -q "Timeout" time-$version.out; then
          printf "%s\t%s\t%s\n" "$version" "TIMEOUT" "$timespent" >> "$rootdir/prophet-summary.log"
     elif grep -q "Found a fix!" temp-$version.out; then
          $rootdir/validate-fix-prophet.sh "$version" "temp-$version.out" "$timespent" 
          echo "PASS:$passt" 
     elif grep -q "without working fix" temp-$version.out; then
          printf "%s\t%s\t%s\n" "$version" "NO" "$timespent" >> "$rootdir/prophet-summary.log"
     fi

  else
    echo "IGNORING:$version"  
  fi 
fi
done <<< "$list"
