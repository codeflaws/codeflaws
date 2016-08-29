#include<stdio.h>
long long int a[100005];
int main(int argc, char *argv[])
{
	int n,m,l,k,j,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	long long int val=0;
	for(i=0;i<m;i++)
	{
		scanf("%d",&l);
		if(l==1)
		{
			long long int g,h;
			scanf("%lld%lld",&g,&h);
			a[g]=h;
		}
		if(l==2)
		{
			int g;
			scanf("%d",&g);
			val=val+g;
		}
		if(l==3)
		{
			int g;
			scanf("%d",&g);
			printf("%lld\n",a[g]+val);
		}
	}
	return 0;
}
