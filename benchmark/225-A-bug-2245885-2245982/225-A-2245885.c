#include<stdio.h>
int main(int argc, char *argv[])
	{
	int n,t,x,i,y,flag=0;
	scanf("%d%d",&n,&t);
	int u=7-t;
	for(i=0;i<n;i++)
		{
		scanf("%d %d",&x,&y);
		if(x==t||u==t||x==u||y==u)
			{
			flag=1;
			}
		}
	if(flag==1)
		{
		printf("NO");
		}
	else
		{
		printf("YES");
		}
	return 0;
	}
