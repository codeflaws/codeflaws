#include <stdio.h>

long long gcd(long long a,long long b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
int main(int argc, char *argv[])
{
    long long x,y,test;
    scanf("%lld %lld",&x,&y);
    test=gcd(x,y);
    //printf("%lld",test);
    if(test>1)
    {
        printf("Impossible");
        return 0;
    }
    else
    {
        while(x && y)
        {
            if(x>y)
            {
                printf("%lldA",(x-1)/y);
                x=x%y;
            }
            else
            {
                printf("%lldB",(y-1)/x);
                y=y%x;
            }
        }
    }
    return 0;
}
