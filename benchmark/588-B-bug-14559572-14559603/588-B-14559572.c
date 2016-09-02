#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	long long num,n,ans=1,i,j;
	scanf("%lld",&n);
	for(i=2,num=n;i<=n;i++)
	{
		if(num%i==0)
		{
			ans*=i;
			while(num%i==0)
				num/=i;
		}
	}
	if(num>1)
		ans*=num;
	printf("%lld\n",ans);
	return 0;
}
