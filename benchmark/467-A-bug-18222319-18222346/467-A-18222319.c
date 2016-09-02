#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i,j,dem=0,n;
	scanf("%d",&n);
	int a[n][2];
	for(i=0;i<n;i++)
	for(j=0;j<2;j++){
		scanf("%d",&a[i][j]);
		if (a[i][0] < a[i][1]) dem ++;
	}
	printf("%d",dem);
	return 0;
}
