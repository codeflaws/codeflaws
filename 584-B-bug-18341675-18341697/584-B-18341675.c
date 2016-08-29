#include <stdio.h>
#define m 1000000007
long long int power(long long int x,long long int y)
{
	if(y==0)
	return 1;
	else if(y%2==0)
	{
		long long int z;
		z=power(x,y/2)%m;
		return (z%m*z%m)%m;
	}
	else
	{
	long long int z;
		z=power(x,y/2)%m;
		return ((x%m*z%m)%m*z%m)%m;
		
	}
}
int main(int argc, char *argv[]) {
	long long int n,a,b;
	scanf("%lld",&n);
	a=power(27,n);
	b=power(7,n);
	n=(a-b)%m;
	printf("%lld\n",n);
return 0;
}
