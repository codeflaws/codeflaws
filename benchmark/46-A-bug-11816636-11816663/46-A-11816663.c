#include<stdio.h>
int main(int argc, char *argv[]) {
	int i,j,k,l,n,m,sum=1;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
		sum += i;
		if(sum%n != 0)
		printf("%d ",sum%n);
		else
			printf("%d ",n);
	}
	printf("\n");
	return 0;
}
