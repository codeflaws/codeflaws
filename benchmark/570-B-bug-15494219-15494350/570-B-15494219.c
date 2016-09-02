#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
	{
	long long int n,m,a;scanf("%lld%lld",&n,&m);
	if(m>abs(n-m)) a=m-1;
	else a=m+1;
	printf("%lld",a);
	return 0;
	}
		
	
