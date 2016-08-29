#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	if(a>b)
		c=a;
	else
		c=b;
	d=(7-c)/6;
	if(c==6)
		printf("0/1\n");
	else if(c==1)
		printf("1/1\n");
	else if(c==2)
		printf("5/6\n");
	else if(c==3)
		printf("2/3\n");
	else if(c==4)
		printf("1/2\n");
	else if(c==5)
		printf("1/3\n");
	return 0;
}
