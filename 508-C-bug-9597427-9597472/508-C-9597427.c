/*288*/
#include<stdio.h>

int mem[301];

int main(int argc, char *argv[])
{
	int m,r,t;
	int i,w,j,k;
	int x,ans=0;
	int can[301]={0};
	scanf("%d %d %d",&m,&t,&r);
	if(r>t)
	{
		printf("-1\n");
		return 0;
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&w);
		mem[w]=1;
	}
	for(i=1;i<=300;i++)
	{
		if(mem[i])
		{
			int x,count=0;
			for(k=1;k<=r;k++)
			{
				if(!can[k]){count++;can[k]=t-count;}
			}
			
			ans+=count;
			
		}
		
		for(j=1;j<=r;j++){if(can[j])can[j]--;}
		
	}
	printf("%d\n",ans);
	return 0;
}
	
