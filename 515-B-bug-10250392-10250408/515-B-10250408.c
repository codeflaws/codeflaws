#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,m,temp;
	scanf("%d%d",&n,&m);
	int boys[1000]={},girls[10000]={};
	int i,j,happyboys=0,happygirls=0;
	scanf("%d",&happyboys);
	for(i=0;i<happyboys;i++)
	{
		scanf("%d",&temp);
		boys[temp]=1;
	}	
	scanf("%d",&happygirls);
	for(i=0;i<happygirls;i++)
	{
		scanf("%d",&temp);
		girls[temp]=1;
	}


	for(i=0;i<m*n+m+n+1;i++)
	{
		if(boys[i%n]+girls[i%m])
		{
			boys[i%n]=1;
			girls[i%m]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(!boys[i])
		{
			printf("No\n");
			return 0;
		}
	}
	for(i=0;i<m;i++)
	{
		if(!girls[i])
		{
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}