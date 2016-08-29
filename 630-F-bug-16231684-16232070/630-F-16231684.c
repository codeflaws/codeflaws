#include<stdio.h>

int main(int argc, char *argv[])
{
    unsigned long long n,num5,num6,num7,k,arr[780];
    for(n=7; n<=777; n++)
    {
        k=(n*(n-1)*(n-2)*(n-3)*(n-4));
        num5=k/120;
        num6=(k*(n-5))/720;
        num7=((k*(n-5))/5040)*(n-6);
        arr[n]=num5+num6+num7;
    }
    while(scanf("%lld",&n)==1)
    {
        printf("%lld\n",arr[n]);
    }
    return 0;
}
