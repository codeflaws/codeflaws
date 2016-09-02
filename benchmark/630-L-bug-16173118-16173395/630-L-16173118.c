#include <stdio.h>

typedef long long ll;

ll shuffle(ll n)
{
  ll a = n / 10000, b = n % 10000 / 1000, c = n % 1000 / 100, d = n % 100 / 10, e = n % 10;
  ll f = a * 10000 + c * 1000 + e * 100 + d * 10 + b;
  return f;
}

ll mul(ll a, ll b, ll m)
{
  if (b == 1) return a%m;
  ll c = mul(a, b/2, m);
  if (b&1) return c*c%m*a%m;
  return c*c%m;
}

int main(int argc, char *argv[])
{
  ll n;
  scanf("%lld", &n);
  n = shuffle(n);
  printf("%lld\n", mul(n, 5, 100000));
  return 0;
}
