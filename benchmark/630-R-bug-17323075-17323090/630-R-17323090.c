#include<stdio.h>
int main(int argc, char *argv[])
{
	long long n;
	scanf("%I64d",&n);
	if (n%2==0)
	printf("2");
	if (n%2!=0)
	printf("1");
	return 0;
}
	