#include <stdio.h>

int main(int argc, char *argv[]){
	int i, n, sum =0;


	scanf("%d", &n);

	if(n-10 <=0 || n-10 > 11 )
		printf("0\n");
	else if(n-10 <10){
		printf("4\n");

	}else
		printf("15\n"); 
	return 0;
}