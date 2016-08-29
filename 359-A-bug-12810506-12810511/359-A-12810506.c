#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,m,i,j,t;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&t);
			if(t==1)
				if(i==0||j==0||i==n-1||j==m-1)
				{
					printf("2");
					return 0;
				}
		}
	}
	printf("4");
	return 0;
}
