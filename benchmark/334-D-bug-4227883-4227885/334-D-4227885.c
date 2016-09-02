#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,m;
	int sum=0;
	int a,b;
	int i=0;
	int x[1010]={0},y[1010]={0};
	scanf("%d %d",&n,&m);
	while(m-->0)
	{
		scanf("%d %d",&a,&b);
		y[a]=1;
		x[b]=1;
		
	}
	for(i=2;i<=n-1;i++)
	{
		if(x[i]==0)
		sum++;
		if(y[i]==0)
		sum++;
	}
	if(n%2==1 && x[n/2+1]==0 && y[n/2+1]==0)
	sum--;
	printf("%d\n",sum);
return 0;
}
