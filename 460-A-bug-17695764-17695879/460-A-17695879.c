#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,count=0,l,t=1;
	for(i=1;i<=n;i++,t++)
	{
		count++;
		if(t%m==0)
		i--;
	}
	printf("%d",count);
return 0;
}