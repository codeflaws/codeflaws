#include<stdio.h>
long long int m=1000000007;
long long int power(long long int x,long long int y)
{
    long long int e;
    if(y==1)
    return(x%m);
    e=power(x,y/2);
    if(y%2==1)
    return((x*e*e)%m);
    else
    return((e*e)%m);
}
int main(int argc, char *argv[])
{
    long long int n,e,f;
    scanf("%lld",&n);
    if(n==1)
    printf("%d",3);
    else
    {
    e=power(2,n-1);
    f=((2*e)+1)%m;
    printf("%lld",(e*f)%m);
    }
    return(0);
}
