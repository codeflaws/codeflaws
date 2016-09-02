#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int n,i;
	scanf("%lld",&n);
	for(i=1000000;i>1;i--)
	{
		if(n%(i*i)==0)
		{
			n=n/i;
		}
	}
	printf("%lld",n);
	return 0;
}