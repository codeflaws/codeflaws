#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i,n;
	char a[1000];
	a[0]='1';
	for (i=2;i<1000;i++)	sprintf(a,"%s%d",a,i);
	scanf("%d",&n);
	printf("%c",a[n-1]);
	return 0;
}