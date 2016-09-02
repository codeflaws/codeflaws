#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i,j,k,t,u;
	int s[5],sum=0;
	for(i=0;i<5;i++){
	scanf("%d",&s[i]);
	sum+= s[i];
	}
	if (sum%5==0) printf("%d",sum/5);
	else printf("-1");
	return 0;
}