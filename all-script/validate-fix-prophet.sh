#!/bin/bash
rootdir="/home/ubuntu/cocodeforces-submissions-benchmark" #directory of this script
rundir="$rootdir/prophet-run" # directory in which prophet is called from 
version="$1"
filen="$2"
timespent="$3"
contestnum=$(echo $version | cut -d$'-' -f1) 
probnum=$(echo $version | cut -d$'-' -f2)
buggyfile=$(echo $version | cut -d$'-' -f4)
correctfile=$(echo $version | cut -d$'-' -f5)
cfile=$(echo "$contestnum-$probnum-$buggyfile".c)
cexefile=$(echo "$contestnum-$probnum-$buggyfile")
goldenfile=$(echo "$contestnum-$probnum-$correctfile".c)
validdir=$rundir/tempworkdir-$version/validation
tempdir="$rootdir/tempvprophet-dir"

runalltest(){
         i="$1"
         origversion="$2"
         goldenpass="$3"
         filen=$validdir/test-valid.sh
	 passt=0
	 failt=0
	 totalt=0
	 alltests=($(grep -E "p[0-9]+\)" $filen | cut -d')' -f 1))
	 for t in "${alltests[@]}"
	 do 
	    timeout -k 50s 50s $filen "$t"&>/dev/null
	    if [ $? -ne 0 ]
	      then
		failt=$((failt+1))
	     else
		passt=$((passt+1))
	    fi
	       totalt=$((totalt+1))
	 done
         if [ ! -z "$goldenpass" ]; then
           if [ "$goldenpass" -eq "$passt" ]; then
             goldenpasst="$passt"
             printf "%s\tYES\t%s\t%s\t%s\t%s\t%s\t%s\n" "$origversion" "$timespent" "$i" "$passt" "$goldenpass" "$totalt" "CORRECT">>"$rootdir/prophet-summary.log"
           else
             printf "%s\tYES\t%s\t%s\t%s\t%s\t%s\t%s\n" "$origversion" "$timespent" "$i" "$passt" "$goldenpass" "$totalt" "INCORRECT">>"$rootdir/prophet-summary.log"
           fi
         fi
         pkill $cexefile
         echo "$passt"
}


if grep -q "Found a fix!" $filen; then
   fixfs=( $(grep "Found a fix! Store to:" $filen | cut -d':' -f2 | sed -e 's/^[ \t]*//') )
   cp -r $rundir/tempworkdir-$version/src $rundir/tempworkdir-$version/validation
   validdir=$rundir/tempworkdir-$version/validation
   cd $validdir
   
   make clean
   make CFLAGS="-std=c99 -fno-optimize-sibling-calls -fno-strict-aliasing -fno-asm"
   runalltest "orig-$cfile" "$version" "" 
   #make a copy of the original file for later restore
   cp "$cfile" "$cfile.orig"
   
   #run validate on correct version for checking if some tests are incorrect
   cp "$goldenfile" "$cfile"
   make clean
   make CFLAGS="-std=c99 -fno-optimize-sibling-calls -fno-strict-aliasing -fno-asm" 
   
   #get the number of tests passed by golden version
   goldenpasst=$(runalltest "golden-$goldenfile" "$version" "")
   echo "GOLDEN:$goldenpasst"

   #iterate through all fixes as SPR could generate more than one fixes
   for i in "${fixfs[@]}"
   do
		#currently, we only check first generated patch
		if [[ "$i" == *.c ]]
		then
		   #copy and compile the fix file before running validation tests 
		   cp "$rundir/$i" "$rootdir/allfixes/$version-fix.c"  
		   cp $rundir/$i $validdir
		   cp "$rundir/$i" "$cfile"
		   make clean
		   make CFLAGS="-std=c99 -fno-optimize-sibling-calls -fno-strict-aliasing -fno-asm"
		   currpasst=$(runalltest "$i" "$version" "$goldenpasst")
	       fi
  done
  #restore the file
  cp "$cfile.orig" "$cfile" 
fi
