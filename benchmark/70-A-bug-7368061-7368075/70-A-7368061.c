#include<stdio.h>
int main(int argc, char *argv[])
{
	int x,sum = 1,i;
	scanf("%d",&x);
	if(x==0)
	{
		printf("0\n");
		return 0;
	}
	for(i=1;i<x;i++)
		sum=((sum+sum)%1000003+sum)%1000003;
	printf("%d\n",sum);
	return 0;

}
