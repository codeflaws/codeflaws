#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,sum=0;
	int r,p;
	int i;
	scanf("%d",&n);
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		scanf("%d",&p);
		sum+=n-p;
	}
	printf("%d\n",sum);
	return 0;
}
