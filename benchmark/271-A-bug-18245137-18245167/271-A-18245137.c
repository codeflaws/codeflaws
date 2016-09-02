#include <stdio.h>
#include <stdlib.h>

int checkso(int n){
	char s[4];
	int i,j;
	sprintf(s,"%d",n);
	for(i=0;i<4;i++)
	for(j=i+1;j<4;j++)
	if (s[i] == s[j]) return 0;
	return 1;
}


int main(int argc, char *argv[]) {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<100;i++)
	if (checkso(n+i) == 1){
	
	printf("%d",n+i);
	return 0;
	
	}
	return 0;
}
