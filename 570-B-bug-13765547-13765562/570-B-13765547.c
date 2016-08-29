#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{


    long long n,m;
    scanf("%lld%lld",&n,&m);

    if(n==1)
         printf("%lld\n",m);
      
    if(abs(n-m)>abs(1-m))
         printf("%lld\n",m+1);
    else
         printf("%lld\n",m-1);

    return 0;

}
