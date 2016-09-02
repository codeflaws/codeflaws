#include<stdio.h>
char A[100000]; int i;
int main(int argc, char *argv[]){
	scanf("%s",A);
	for(i=0; A[i] ; i++)
		if(A[i] != '0')
			printf("1");
	   else
			break;

	for(i++ ; A[i] ; i++)
		printf("%c",A[i]);

	return 0;
}


