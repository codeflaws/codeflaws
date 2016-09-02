#include <stdio.h>
long long int max(long long int a,long long int b)
{
    return (a>b)?a:b;
}
int main(int argc, char *argv[])
{
  long long int a,b,c,n,ans,x;
  scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
  x=(n-b)/(b-c);
  if(b - c >= a || b > n)
    {
        ans = n / a;
    }
    else {
        n -= ans * (b - c);
        while(n >= b)
        {
            n -= b;
            n += c;
            ans++;
        }
        ans+=n/a;
    }
  printf("%lld",ans);
  return 0;
}