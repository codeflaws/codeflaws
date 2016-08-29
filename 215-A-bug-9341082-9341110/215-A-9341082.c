#include<stdio.h>
int a[52],b[52];
int main(int argc, char *argv[])
{
	int x,max,k,n,m,i,j,c1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	max=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((b[i]%a[j])==0)
			{
				k=(b[i]/a[j]);
				if(k>=max)
				{
					max=k;
				}
			}
		}
	}
	c1=0;
	x=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			x=(b[i]/a[j]);
			if(x==max && (b[i]%a[j]==0))
			c1++;
		}
	}
	printf("%d",c1);
	return 0;
}
