# Codeflaws
The Codeflaws benchmark is a collection of C programs with 4085 defects. Each defect are  where the dataset is crawled from [Codeforces](http://codeforces.com/)

##Structure of each folder
Each folder is named using the following convention: 
&lt;contestid&gt;-&lt;problem&gt;-bug-&lt;buggy-submisionid&gt;-&lt;accepted-submissionid&gt;
Each folder contains:
- Buggy submission with name &lt;contestid&gt;-&lt;problem&gt;-&lt;buggy-submisionid&gt;.c
- Accepted submission with name &lt;contestid&gt;-&lt;problem&gt;-&lt;accepted-submisionid&gt;.c
- Two sets of test scripts: 
   (1) Repair Test script (test suite given to repair tools for generating repair): test-genprog.sh is for search-based repair tools (GenProg, SPR, Prophet), test-angelix.sh is for Angelix as it requires inserting special instrumentation.
   (2) Test script for patch validation (held-out test suite): test-genprog-valid.sh is for validating search-based repair tools (GenProg, SPR, Prophet), test-angelix.sh is for validating Angelix    
- Test input files: input[0-9]+ file used by Test suite (1), and  heldout-input[0-9]+ file used by Test suite (2)
- Test output files: output[0-9]+ file used by Test suite (1), and  heldout-output[0-9]+ file used by Test suite (2)
- Makefile for compiling the buggy submission. This contains the CFLAGS options recommended by Codeforces. To compile the accepted submission, use the command `make FILENAME=10-A-13543524`
- Makefile.genprog for compiling the buggy submission using cilly. This is for GenProg experiments as GenProg works on CIL representation.

Due to the following error for the version 10-D-bug-1434543-1434549 and 674-E-bug-17842470-17842486, we have placed the archive file for these two versions in github repository:

remote: error: File 10-D-bug-1434543-1434549/heldout-output-pos43 is 732.30 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos10 is 1276.89 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos13 is 1271.52 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos14 is 1206.57 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos15 is 1264.47 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos16 is 1133.45 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos28 is 1216.45 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos33 is 1418.53 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos41 is 1334.80 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos43 is 1440.57 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos44 is 1445.55 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos45 is 1435.50 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos46 is 1337.14 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos64 is 1385.69 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: File 674-E-bug-17842470-17842486/heldout-output-pos9 is 1244.24 MB; this exceeds GitHub's file size limit of 100.00 MB


Use the following command for extracting the two versions:

tar -zxvf 10-D-bug-1434543-1434549.tar.gz
tar -zxvf 674-E-bug-17842470-17842486.tar.gz

For more information/questions about the benchmark, refer to the following website:
https://codeflaws.github.io/
