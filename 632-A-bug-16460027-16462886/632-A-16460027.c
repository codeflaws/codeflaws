#include <inttypes.h>
#include <inttypes.h>
#include <inttypes.h>
#include <inttypes.h>
#include<stdio.h>
#include<string.h>
int64_t quick(int x, int n)
{
	int res = 1;
	while(n>0)
	{
		if(n&1)
			res = res*x;
			x = x*x;
		n>>=1;
	}
	return res;
}

int main(int argc, char *argv[])
{
	int64_t n, v;
	while(scanf("%lld%lld", &n, &v)!=EOF)
	{
		char buy[45][20];
		int64_t i, j;
		for(i = 0; i< n;i++)
		{
			scanf("%s", buy[i]);
		}
		int64_t sum1 = v/2, num = 1;
		for(i=  n-1; i > 0; i--)
		{	
			if(strcmp(buy[i], "halfplus")==0)
				num = num*2+1;
			else
				num =  num*2;
				sum1 += num*v/2;
		}
		
		printf("%lld\n", sum1);
	}
	return 0;
}
