#include<stdio.h>
int main(int argc, char *argv[])
{
int test;
scanf("%d",&test);
while(test>0)
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
		printf("1\n");
	else
		printf("0\n");
	test--;
}
return 0;
}
