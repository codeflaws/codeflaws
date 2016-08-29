#include<stdio.h>
int a,b,d;
int main(int argc, char *argv[])
{
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		d=b=b-a;
		printf("%d ",a);
		a=0;
	}
	else if(a>b)
	{
		d=a=a-b;
		printf("%d ",b);
		b=0;
	}
	printf("%d",d/2);
return 0;
}
