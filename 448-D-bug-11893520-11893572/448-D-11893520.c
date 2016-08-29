#include<stdio.h>
#define min(a,b) a>b?b:a
long long int n,m,k,an;
long long int bin(long long int lo,long long int hi)
{
	if(lo>=hi)
		return lo;
	long long int i,mi=(lo+hi)/2,c=0;
	for(i=1;i<=n;i++)
		c+=min((mi-1)/i,m);
	if(c<k)
		return bin(mi+1,hi);
	return bin(lo,mi);
}
int main(int argc, char *argv[])
{
	scanf("%lld %lld %lld",&n,&m,&k);
	an=bin(0,n*m);
	printf("%lld\n",an-1);
	return 0;
}
