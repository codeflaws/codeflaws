#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int y,k,n,i,x,count=0;
	scanf("%d%d%d",&y,&k,&n);
	x=n-y;
	for(i=k;i<=n;i+=k)
	{
		if(i>y)
		{
			printf("%d ",i-y);
			count++;
		}
	}
	if(count==0)
	printf("-1");
return 0;
}