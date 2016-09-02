#include<stdio.h>
#include<string.h>
int i,j,n;
int main(int argc, char *argv[]){
	char A[9][9] = { "vaporeon", "jolteon",
		               "flareon", "espeon", "umbreon",
							"leafeon","glaceon", "sylveon" },B[9];
	scanf("%d %s",&n,B);
	for(i=0;i<8;i++){
		for(j=0; A[i][j] ; j++)
			if(B[j] != '.' && A[i][j] == B[j]);
	      else if(B[j] != '.') break;
	   if(j == n && strlen(A[i]) == strlen(B)){
			printf("%s",A[i]);
		   return 0;
		}
   }
}
