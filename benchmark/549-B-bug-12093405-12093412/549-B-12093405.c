#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,count=0;
	scanf("%d",&n);
	char a[100][100];
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	int b[100],c[100]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n*n;i++)
	{
		if(b[i%n]==0)
		{
			count++;
			c[i%n]=1;
			for(j=0;j<n;j++)
			{
				if(a[i%n][j]=='1')
				{
					b[j]--;
				}
			}
		}
	}
	printf("%d\n",count);
	for(i=0;i<n;i++)
	{
		if(c[i])
		{
			printf("%d",i+1);
		}
	}
	return 0;
}
