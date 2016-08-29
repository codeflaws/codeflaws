#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int n,carp=1,top=0,i,t=1;
	scanf("%lld",&n);
	if(n==1){printf("0"); return 0;}
	if(n%2) t=-1;
	for(i=1;i<=n-1;i++)
	{
		top=top*3+t*3;
		t*=-1;
		top%=1000000007;
	}
	printf("%lld",top);
	return 0;
}
