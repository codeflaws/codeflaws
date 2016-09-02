#include<stdio.h>
int main(int argc, char *argv[])
{
	int a;
	scanf("%d",a);
	(a & a-1)?printf("NO"):printf("YES");
	return 0;

}
