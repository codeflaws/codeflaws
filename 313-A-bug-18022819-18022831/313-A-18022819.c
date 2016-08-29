#include<stdio.h>
int main(int argc, char *argv[])
{
    long long n,m=1,a,k=1;
    long long b=0;
    scanf("%lld",&b);
    if(b<0){
    a=(b/100)*10+b%10;
    n=b/10;
    printf("%d\n%d\n",n,a);
    a>n?printf("%lld",a):printf("%lld",n);
    }
    else
    printf("%lld",b);
    return 0;
}