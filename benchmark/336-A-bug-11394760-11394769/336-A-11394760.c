#include<stdio.h>
typedef long long ll;
int main(int argc, char *argv[])
{
      ll x,y;
      ll zero = 0;
      scanf("%lld%lld",&x,&y);
      if(x>=0&&y>=0)
      {
           printf("%lld %lld %lld %lld\n",zero,x+y,x+y,zero);
      }
      if(x<0&&y>=0)
      {
           printf("%lld %lld %lld %lld\n",-(-x+y),zero,zero,-x+y);
      }
      else if(x>=0&&y<0)
      {
              printf("%lld %lld %lld %lld\n",zero,-(x-y),x-y,zero);
      }
      else
      {
            printf("%lld %lld %lld %lld\n",-(-x-y),zero,zero,-(-x-y));
      }
      return 0;
}