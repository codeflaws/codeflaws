#include<stdio.h>
#include<limits.h>
int f(int a,int b)
{
	if(a>=b)
	return b;
	return a;
}
int main(int argc, char *argv[])
{
	int n,x;
	scanf("%d%d",&n,&x);
    int nn=n;
	int a[1001]={0};
	while(n--)
	{
		int p,q;
		scanf("%d%d",&p,&q);
		if(p>q)
		{
			int t;
			t=p;
			p=q;
			q=t;
		}
		int i;
		for(i=p;i<=q;i++)
		a[i]++;
	}
	n=nn;
	int i=x;
	int dist;
	while(i>=0)
	{
		if(a[i]==n)
		break;
		i--;
	}
	if(i<=0)
	dist=INT_MAX;
	else
	dist=x-i;
	i=x;
	while(i<1001)
	{
		if(a[i]==n)
		break;
		i++;
	}
//		printf("%d %d\n",i,x);
	if(i<1001)
	dist=f(dist,i-x);
	printf("%d\n",dist);
}