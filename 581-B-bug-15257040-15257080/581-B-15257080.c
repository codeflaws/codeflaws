#include<stdio.h>
long max(long x,long y)
{
    if(x>y)
        return x;
    return y;
}
int main(int argc, char *argv[])
{
    long n,i;
    scanf("%ld",&n);
    long array[n];
    for(i=0;i<n;i++)
        scanf("%ld",&array[i]);
    long dp[n],equal[n];
    dp[n-1]=array[n-1];
    equal[n-1]=0;
    for(i=n-2;i>=0;i--)
    {
        dp[i]=max(array[i],dp[i+1]);
        if(array[i]==dp[i+1])
            equal[i]=1;
        else
            equal[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(dp[i]!=array[i]||equal[i])
            printf("%ld ",dp[i]-array[i]+1);
        else
            printf("%d ",0);
    }
    return 0;
}
