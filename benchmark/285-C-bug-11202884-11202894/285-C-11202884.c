#include<stdio.h>
int cmp(const void *p,const void *q)
{
	return (*(int *)p - *(int *)q);
}
typedef long long int ll;
int main(int argc, char *argv[])
{
	int n,a[300005],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	qsort(a+1,n,sizeof(int),cmp);
	ll sum=0;
	for(i=1;i<=n;i++)
	{
		if(a[i]<i)
			sum+=(ll)(i-a[i]);
		else
			sum+=(ll)(a[i]-i);
	}
	printf("%lld\n",sum);
}

