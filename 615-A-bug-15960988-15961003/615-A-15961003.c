#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,j,n,m,x,y,s[1000],flag=0,k;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(j=0;j<x;j++)
		{
			scanf("%d",&y);
			for(k=1;k<=m;k++)
			{
				if(y==k)
				{
					s[k]++;
					break;
				}
			}
		}
	}
	for(i=1;i<=m;i++)
	{
		if(s[i]==0)
		{
			flag=1;
			printf("NO");
			break;
		}
	}
	if(flag==0)
	{
		printf("YES");
	}
	
return 0;
}
