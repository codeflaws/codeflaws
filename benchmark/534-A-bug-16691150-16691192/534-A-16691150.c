#include<stdio.h>
int main(int argc, char *argv[])
{
int x,i;
scanf("%d",&x);
	if(x==3)
		printf("2\n1 3");
	else if(x==2)
		printf("1\n1");
	else
	{
		printf("%d\n",x);
	for(i=1;i<=x;i+=2)
		printf("%d ",i);
	for(i=2;i<=x;i+=2)
		printf("%d ",i);
	}
	return 0;
}