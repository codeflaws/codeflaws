#include <stdio.h>

int main(int argc, char *argv[])
{
    long long int n,i;
    scanf("%lld",&n);
    if(n==1 || n==2)
    {
        printf("-1");
        return 0;
    }
    else
    {
        for(i=n-1; i>=1; i--)
        {
            printf("%lld ",i);
        }
    }
    return 0;
}
