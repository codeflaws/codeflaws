#include <inttypes.h>
#include<stdio.h>
int main(int argc, char *argv[])
{int64_t n,a,b,c,l,mid,i,j;
    scanf("%lld",&n);
    scanf("%lld %lld %lld",&a,&b,&c);
   if(n>=b||n>=a)
   {
       if(a<=b-c)
        printf("%lld\n",n/a);
    else
        printf("%lld",(n-b)/(b-c)+1+(n-((n-b)/(b-c)+1)*(b-c))/a);
   }

    else
        printf("0\n");
return 0;
}
