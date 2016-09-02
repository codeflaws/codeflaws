#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    long long int n, i=400, sum;
    scanf("%lld", &n);
    long long int sq=sqrt(n);
    if(sq*sq==n)
    {
        printf("-1\n");
        return 0;
    }
    
    while(i--)
    //for(i=1; i<=sqrt(n); i++)
    {
        long long int temp=sq;
        sum=0;
        while(temp)
        {
            sum+=temp%10;
            temp/=10;
        }
        if(sq*sq + sq*sum == n)
        {
            printf("%lld\n", sq);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
