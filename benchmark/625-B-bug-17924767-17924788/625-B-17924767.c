#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef long long int LL;

#define din(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define llin(n) scanf("%lld",&n)
#define llout(n) printf("%lld\n",n)
#define strin(n) scanf(" %s",n)
#define strout(n) printf("%s\n",n)
#define power(a, b) po(a, b)

int mod=1000000007;

long long po(long long x, long long y)
{
	long long pro=1;
	while(y>0)
	{
		if(y&1 != 0)
			pro=((pro%mod)*(x%mod))%mod;
		x=(x*x)%mod;
		y=y>>1;
	}
	return pro%mod;
}

int main(int argc, char *argv[])
{
	char arr[100005];
	int final[100005];
	int len=0;
	char check[50];

	strin(arr);
	strin(check);

	int n = strlen(arr);
	int nc = strlen(check);
	int i, j;

	for(i=0;i<=n-nc;i++)
	{
		char temp[50];
		int k=0;
		for(j=i;j<i+nc;j++)
		{
			temp[k] = arr[j];
			k++;
		}
		temp[k++] = '\0';
		//strout(temp);
		if(strcmp(check, temp) == 0)
			final[len++] = i;
	}
	int ans=1;
	if(len == 0)
		ans = 0;
	for(i=0;i<len-1;i++)
	{
		if(final[i+1] - final[i] >= nc)
		{
			ans++;
		}
		else
		{
			ans++;
			i++; // not sure
		}
	}
	dout(ans);
	return(0);
}