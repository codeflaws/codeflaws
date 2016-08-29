#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b,sum;
	scanf("%d %d",&a,&b);
	sum=a;
	while(a/b==0)
	{
		sum=sum+a/b;
		a=a/b+a%b;
	}
	printf("%d",sum);
	return 0;
}