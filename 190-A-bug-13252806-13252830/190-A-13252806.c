#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int n,m,min,max;
    scanf("%lld%lld",&n,&m);
    if(n==0 && m==0)
    {
        printf("0 0");
    }
    else if(n==0 && m>0)
    {
        printf("Impossible");
    }
    else if(n==1 && m>0)
    {
        min=m;
        max=m;
        printf("%lld %lld",min,max);
    }
    else if(n>1 && m==0)
    {
        max=n;
        min=n;
        printf("%lld %lld",min,max);
    }
    else if(n>1 && m>=n)
    {
        min=m;
        max=m+(n-1);
        printf("%lld %lld",min,max);
    }
    else if(n>1 && m<n)
    {
        min=m+(n-m);
        max=m+(n-1);
        printf("%lld %lld",min,max);
    }

    return 0;
}
