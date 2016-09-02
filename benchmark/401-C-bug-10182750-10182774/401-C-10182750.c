#include<stdio.h>
int main(int argc, char *argv[])
{
	int k=0,s0,s1;
	scanf("%d %d",&s0,&s1);
	if (s0 > s1+1 || s1 > s0*2+2)
	{
		printf("-1");
		return 0;
	}
	while(s1 + s0)
	{
	if (k < 2)
	{
	printf("1");
	s1--,	k++;
	}
	else
	{
	printf("0");
	s0--,k=0;
	}
	}
	return 0;
}
