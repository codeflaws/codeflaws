#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i;
	scanf("%d",&n);
	if(n==1 || n==2)
	{
		printf("-1");
		return 0;
	}
	for(i=n;i>0;i--)
	printf("%d ",i);
	return 0;
}
