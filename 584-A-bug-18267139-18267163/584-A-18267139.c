#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[]){
	int i,j,k,t,n;
	scanf("%d",&n);
	scanf("%d",&t);
	if (n<10){
		printf("-1");
		return 0;
		}
	if( t!= 10)
		for(i=0;i<n;i++) printf("%d",t);
	else{
		printf("1");
		for(i=0;i<n-1;i++) printf("0");
	}
	return 0;
}