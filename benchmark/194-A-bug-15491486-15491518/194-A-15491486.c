#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,k;
	scanf("%d %d",&n,&k);
	if (2*n>=k){
		printf("%d",n);
	}
	else if (3*n<=k){
		printf("0");
	}
	else{
		printf("%d",k%(2*n));
	}
	return 0;
}
