#!/usr/bin/python
import re
import sys
from sys import argv
from os import system, path, chdir, getcwd, environ
import subprocess
import getopt
import pexpect

testlist=[47,16,78]
neglimit = 5000 
def testOutput(tinput):
	if tinput<neglimit:
		return "p"+str(abs(tinput))
	else:
                return "n"+str(abs(tinput- neglimit + 1))

def ignorechomp(sdir,ignorechompl):
   yesignore = False
   for ignorec in ignorechompl:
          if ignorec in sdir:
              yesignore = True
              return True
   return yesignore


if __name__ == "__main__":
	opts, args = getopt.getopt(argv[1:], "p:");
	profile_dir = "";
	for o, a in opts:
		if o == "-p":
			profile_dir = a;

        src_dir = args[0];
        test_dir = args[1];
        work_dir = args[2];
        if (len(args) > 3):
		ids = args[3:];
		currdir = src_dir;
	if (profile_dir != ""):
		currdir = profile_dir;
        
        rundir=currdir
	currdir= getcwd()
	

        my_env = environ;
        my_env["GENEXPOUT"] = "0";
        my_env["CMPEXPOUT"] = "1";

        if profile_dir:
                chdir(profile_dir)
        else:
                chdir(src_dir)
        currdir= getcwd()
	for testn in ids:
		i =""
		rex = re.compile(r"^([0-9]+)",re.S|re.M)
		matchp = rex.match(testn)
		if matchp:
			i = matchp.groups()[0].strip()
		else:
			rex = re.compile(r"^([0-9]+)",re.S|re.M)
			matchn = rex.match(testn)
			if matchn:
				i = matchn.groups()[0].strip()	
		if int(i)!=0:
			listindex=int(i)-1
			testn = testOutput(int(i))
                        ind =1 
			actual=""
                        cmd="timeout -k 50s 50s ./test-genprog.sh "+str(testn)
                        try:
                             cmd_output = subprocess.check_output ([cmd],env = my_env,shell=True,stderr= subprocess.STDOUT, universal_newlines=True).split('\n')
                             for data in cmd_output:
				if "Accepted" in data:
					print(str(i))
				elif "Runtime Error" in data or "Wrong Answer" in data:
					print ""
                        except subprocess.CalledProcessError as e:
                                  print ""
