#include<stdio.h>
#define MOD 1000000009

int sqr(long long int x, int n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else if(n%2==0)
		return sqr( (x*x)%MOD, n/2 ) % MOD;
	else
		return (x * sqr( (x*x)%MOD, (n-1)/2 )) % MOD;
}

int main(int argc, char *argv[])
{
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	int x, y, z;
	z = n%k;
	y = n/k;
	if(y*(k-1)+z >= m)
	{
		printf("%d\n", m);
	}
	else
	{
		x = m - y*(k-1) - z;
		y -= x;
		long long int ans;
		int i;
		ans = sqr(2, x+1);
		ans -= 2;
		k %= MOD;
		ans *= k;
		ans %= MOD;
		ans += y*(k-1);
		ans %= MOD;
		ans += z;
		ans %= MOD;
		printf("%lld\n", ans);
	}
	return 0;
}
