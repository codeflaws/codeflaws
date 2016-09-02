#include <stdio.h>
#include <stdlib.h>

long long   f(long long  i, long long  s,long long  h,long  long k)
{
    if (s<=h)
    {


  printf("(%lld)    ",s);

      return  f(i*10,(s*10)+7,h,k)+f(i*10,(s*10)+4,h,k)+1;


    }
    else
        return 0;

}
int main(int argc, char *argv[])
{
    long x,m=0;
    scanf("%lld",&x);
   m=f(1,0,x,0);
printf("%lld",m-1);

return 0;
}
