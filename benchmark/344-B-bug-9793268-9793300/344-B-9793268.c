#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int x,y,z;
	x=(b+c-a)/2;
	y=(a+c-b)/2;
	z=(a+b-c)/2;
	if(a+b-c>=0&&b+c-a>=0&&a+c-b>=0)
	printf("%d %d %d",z,x,y);
	else
		printf("Impossible");
return 0;
}
