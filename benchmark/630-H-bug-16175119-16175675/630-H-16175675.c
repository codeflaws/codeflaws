#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int n;
	scanf("%lld",&n);
	n=n*(n-1LL)*(n-2LL)*(n-3LL)*(n-4LL)/120LL*n*(n-1LL)*(n-2LL)*(n-3LL)*(n-4LL);
	printf("%lld\n",n);
	return 0;
}
