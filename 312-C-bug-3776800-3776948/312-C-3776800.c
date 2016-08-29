#include<stdio.h>
int main(int argc, char *argv[])
{
	int t,n,k,i,x;
	scanf("%d%d",&n,&k);
	x=n*(n-1);
	x/=2;
	if(k>x)
		puts("no solution");
	else
	{
		for(i=0;i<n;i++)
		{
			printf("0 %d\n",i);
		}
	}
	return 0;
}