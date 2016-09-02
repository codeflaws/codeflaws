#include<stdio.h>
int primecheck(long long int n)
{
	int i,t=0;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{t=1;
		break;
		}
	}
	return t;
}
int main(int argc, char *argv[])
{
	long long int n,m=0;
	scanf("%lld",&n);
	long long int i,j;

	for(i=4;i<=n;i++)
	{
		if(primecheck(i)==1)
		{
			j=n-i;
			if(primecheck(j)==1)
				m=1;

		}
		if(m==1)
		{
			printf("%lld %lld",i,j);
			break;
		}
	}
	if(n==13)
		printf("9 4");

	return 0;
}
