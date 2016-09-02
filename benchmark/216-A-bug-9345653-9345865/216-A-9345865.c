#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",1+a*b+b*c+c*a-a-b-c);
	return 0;
}
