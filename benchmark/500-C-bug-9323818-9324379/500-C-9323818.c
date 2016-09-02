#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	// your code goes here
	int n,m;
	scanf("%d %d",&n,&m);
	int weight[n+1];
	int read[m+1];
	bool taken[n+1];
	int order[n+1];
	int i=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&weight[i]);
		taken[i]=false;
	}
	
	for(i=1;i<=m;i++)
	{
		scanf("%d",&read[i]);
	}
	
	int index=1;
	i=1;
	while(index<=n && i<=m)
	{
		if(!taken[read[i]])
		{
			order[index++]=read[i];
			taken[read[i]]=true;
		}
		i++;
	}
	
/*	for(i=1;i<=n;i++)
		printf("%d ",order[i]);*/
	int ans=0;
	
	for(i=1;i<=m;i++)
	{
		int temp=read[i];
		int prev=read[i];
		int j=1;
		for(j=1;j<=n;j++)
		{
			if(order[j]!=temp)
			{
				int ttt=order[j];
				ans+=ttt;
				order[j]=prev;
				prev=ttt;
			}
			else
			{
				order[j]=prev;
				order[0]=temp;
				break;
			}
		}
		
	}

	printf("%d",ans);
	
	
	return 0;
}