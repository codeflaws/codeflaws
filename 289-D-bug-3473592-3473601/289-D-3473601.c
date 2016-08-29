#include <stdio.h>

#define MOD 1000000007

long long binpow(long long a, long long k)
{
    long long ans = 1;
    if(a == 0) return 1;
    while(k)
    {
        if(k & 1) 
        {
            ans *= a;
            ans %= MOD;
        }
        a *= a;
        a %= MOD;
        k >>= 1;
    }
    return ans;
}

int main(int argc, char *argv[])
{
    long long n, k; 
    scanf("%lld %lld", &n, &k);
    printf("%lld", binpow(k, k - 1) * binpow(n - k, n - k) % MOD);
    return 0;
}