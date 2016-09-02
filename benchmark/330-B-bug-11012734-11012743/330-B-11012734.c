#include<stdio.h>
int n,m,i,j,t,s,h[1002],x,y;
int main(int argc, char *argv[])
{
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&x,&y);
		h[x]=h[y]=1;
	}
	for(i=1;i<=n;i++)
		if(!h[i]) break;
	for(j=1;j<=n;j++)
	{
		if(j!=i)
			printf("%d %d\n",i,j);
	}
	return 0;
}
