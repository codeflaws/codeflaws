#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,j,n,a[1000][1000],b[1000],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
		b[i]=max;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==n-1)
		{
			b[i]=n;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
return 0;
}
