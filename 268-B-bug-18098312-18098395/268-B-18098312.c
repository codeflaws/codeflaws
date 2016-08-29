#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,n;
	scanf("%d",&n);
	long long int sum=n;
	for(i=2;i<=n;i++)
	{
		sum+=(2*(n-i))+1;
	}
	printf("%I64d",sum);
	return 0;
}