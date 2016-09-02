#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,p,q,a[101],c=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a[i]=0;
	}
	a[0]=1;
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		scanf("%d",&j);
		a[j]++;
	}
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d",&j);
		a[j]++;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>0)
		{
			c++;
			//printf("%d\n",c);
		}
	}
	if(c==n)
	{
		printf("I become the guy\n");
	}
	else
	{
		printf("Oh, my keyboard!\n");
	}
	return 0;
}
