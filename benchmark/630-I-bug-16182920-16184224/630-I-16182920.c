#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	long long int n;
	scanf("%lld",&n);
	n=4*(n-1LL)*pow(3LL,n-2LL);
	printf("%lld\n",n);
	return 0;
}
