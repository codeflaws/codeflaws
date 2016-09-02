#include<stdio.h>
long long int max(long long int a,long long int b)
{
	return a>b?a:b;
}

int main(int argc, char *argv[])
{
	long long int i,a[100001],n,cnt=1,cnt1=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++) scanf("%lld",&a[i]);
	for(i=1;i<n;i++)
	{
		if(a[i]<=a[i+1]) cnt++;
		else cnt1 = max(cnt1,cnt),cnt=1;
	}
	printf("%lld\n",max(cnt1,cnt));
	return 0;
}
