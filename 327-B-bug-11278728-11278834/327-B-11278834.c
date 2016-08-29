#include<stdio.h>
long long int n,k,w,a,m,i,j,h[10000002],u,hh[1000003];
long long int t;
int main(int argc, char *argv[])
{
	scanf("%lld",&n);
	for(i=2;i<=100000005;i++)
	{
		if(!h[i])
		{
			hh[u++]=i;
			if(u>=n) break;
			for(j=i*i;j<=10000001;j+=i)
				h[j]=1;
		}
	}
	for(i=0;i<u;i++)
		printf("%lld ",hh[i]);
	return 0;
}
