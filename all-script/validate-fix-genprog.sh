#!/bin/bash
rootdir="/home/ubuntu/codeforces-crawler/CodeforcesSpider" #directory of this script
rundir=$rootdir/genprog-run # directory in which genprog is called from 
version="$1"
filen="$2"
repairdir="$3"
timespent="$4"
contestnum=$(echo $version | cut -d$'-' -f1) 
probnum=$(echo $version | cut -d$'-' -f2)
buggyfile=$(echo $version | cut -d$'-' -f4)
cfile=$(echo "$contestnum-$probnum-$buggyfile".c)
cexefile=$(echo "$contestnum-$probnum-$buggyfile")
correctfile=$(echo $version | cut -d$'-' -f5)
goldenfile=$(echo "$contestnum-$probnum-$correctfile".c)
validdir=$repairdir-validation

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
              printf "%s\tYES\t%s\t%s\t%s\t%s\t%s\t%s\n" "$origversion" "$timespent" "$i" "$passt" "$goldenpass" "$totalt" "CORRECT">>"$rootdir/genprog-summary.log"
           else
              printf "%s\tYES\t%s\t%s\t%s\t%s\t%s\t%s\n" "$origversion" "$timespent" "$i" "$passt" "$goldenpass" "$totalt" "INCORRECT">>"$rootdir/genprog-summary.log"
           fi
         fi
         pkill $cexefile
         pkill test-valid.sh
         echo "$passt"
}





if grep -q "Repair Found" $filen; then
   fixf="$repairdir/repair/$cfile" 
   cp -r $repairdir $validdir
   cd $validdir
   cp $validdir/preprocessed/$cfile $cfile  
   make clean
   make CFLAGS="-std=c99 -fno-optimize-sibling-calls -fno-strict-aliasing -fno-asm"
   runalltest "orig-$cfile" "$version" ""
   cp "$cfile" "$cfile.orig"
   #copy and compile the fix file before running validation tests 
   cp $goldenfile $cfile
   make clean
   make CFLAGS="-std=c99 -fno-optimize-sibling-calls -fno-strict-aliasing -fno-asm"

  
   goldenpasst=$(runalltest "golden-$goldenfile" "$version" "")
   echo "GOLDEN:$goldenpasst"
   make clean
   make CFLAGS="-std=c99 -fno-optimize-sibling-calls -fno-strict-aliasing -fno-asm"

   runalltest "fix-$cfile" "$version" "$goldenpasst"
   
  #restore the file
  cp "$cfile.orig" "$cfile" 
  rm -rf "$repairdir"
fi
