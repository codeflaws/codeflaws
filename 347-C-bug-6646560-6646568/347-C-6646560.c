/* Alice and Bob */

#include <stdio.h>

typedef unsigned long long ll_int;

ll_int gcd(ll_int a, ll_int b)
{
  ll_int c;
  while( a != 0)
    {
      c = a;
      a = b%a;
      b = c;
    }
  return b;
}
int main(int argc, char *argv[])
{
  int n;
  scanf("%d",&n);
  int m = n;

  ll_int max = 0, temp;
  scanf("%llu",&temp);
  ll_int g = temp;
  n--;

  while(n--)
    {
      scanf("%llu",&temp);
      if(temp > max) max = temp;
      if(g != 1) g = gcd(g,temp);
    }
  
  int x = max/g - m;
  if(x & 1)
    printf ("Alice\n");
  else
    printf ("Bob\n");
  
  return 0;
}
