#include <stdio.h>
long long int n,i;
int main(int argc, char *argv[])
{
	scanf("%lld",&n);
	for(i=10000000;i>=2;i--)
	{
		while(n%(i*i)==0)
		{
			n=n/i;
		}
	}
	printf("%lld",n);	
	return 0;
}
