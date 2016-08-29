#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i,j,k,l,m,n,d,dem=0;
	scanf("%d",&k);
	scanf("%d",&l);
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&d);
	for(i=1;i<=d;i++){
		if ((i%k == 0) || (i%l == 0) || (i%m == 0) || (i%n == 0) || (i%d == 0))
		dem++;
	}
	printf("%d",dem);
	return 0;
}
