#include<stdio.h>
#include<stdlib.h>
long long ncr(long long n,long long r)
{
	if(r>(n-r))
		r=n-r;
	long long i,ret1=1,ret2=1,ret,j;
	int div[20]={0};
	div[1]=1;
	div[0]=1;
	for(i=0;i<r;i++)
	{
		ret1*=(n-i);
		for(j=2;j<=r;j++)
		{
			if(!(ret1%j) && !div[j])
				{
					ret1/=j;
					div[j]=1;
				}
		}
	}
	for(i=1;i<r;i++)
		if(!div[i])
			ret2*=(i+1);
	ret=ret1/ret2;
	//printf("%lld\n",ret);
	return ret;
}
int main(int argc, char *argv[])
{
	long long int ans=0,n,m,k;
	long long initb,initg;
	scanf("%lld%lld%lld",&n,&m,&k);
	if(n>=(k-1))
	{
		initb=k-1;
		initg=1;
	}
	else
	{
		initb=n;
		initg=k-n;
	}
	for(;initb>=4;initb--,initg++)
		ans+=((ncr(n,initb))*(ncr(m,initg)));
	printf("%lld\n",ans);
	return 0;
}
