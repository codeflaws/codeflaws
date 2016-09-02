#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,m,i,x,y,flag;
	while(~scanf("%d",&n))
	{
		flag=0;
		scanf("%d",&m);	
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&x,&y);
			if(flag) continue;
			if(x==7-m||y==7-m||x+y==7)
			{
				flag=1;
				continue;
			}
		}
		if(flag) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}