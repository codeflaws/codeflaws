#include<stdio.h>
#define mod 1000000007
int main(int argc, char *argv[])
{
	long long int n,a[10005]={0},p[1005],i;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
		scanf("%lld",&p[i]);
	for(i=1;i<=n;i++)
		a[i+1]=(a[i]*2+2-a[p[i]]+mod)%mod;
	printf("%lld\n",a[n+1]);
	return 0;
}
