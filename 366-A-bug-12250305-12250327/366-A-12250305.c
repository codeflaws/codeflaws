#include<stdio.h>
long long min(long long a,long long b)
{
    if(a>=b)
    return b;
    else
    return a;
}
struct guard{
    long long c1,b1,c2,b2;
};
int main(int argc, char *argv[])
{
    long long n,minc,minb,i=1,p,k;
    struct guard sanjay;
    scanf("%lld",&n);
    k=4;i=1;
    while(k--)
    {
        p=1;
        scanf("%lld%lld%lld%lld",&sanjay.c1,&sanjay.b1,&sanjay.c2,&sanjay.b2);
        minc=min(sanjay.c1,sanjay.b1);
        minb=min(sanjay.c1,sanjay.b2);
        if(minc+minb<=n)
        {
            p=2;
            printf("%lld %lld %lld",i,minc,n-minc);
            return 0;
        }
        else
        {
            i++;
        continue;
    }
    }
    if(p==1)
    printf("-1\n");
    return 0;
}