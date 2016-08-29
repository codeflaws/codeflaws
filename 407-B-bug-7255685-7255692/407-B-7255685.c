#include<stdio.h>
#define mod 1000000007;

void solve(int p[],int n)
{
    int i,j;
    long long int dp[n+1];
    dp[0]=1;
    for(i=1;i<n;i++)
    {
        dp[i]=1;
        if(i==p[i]) dp[i]=1;
        for(j=p[i];j<i;j++)
        {
            dp[i]+=dp[j];
            dp[i]++;
            dp[i]%=mod;
        }
       // printf("dp[%d] %d\n",i,dp[i]);
    }
    dp[n]=0;
    for(i=0;i<n;i++)
    {
        dp[n]+=dp[i];
        dp[n]++;
        dp[n]%=mod;
    }
    printf("%lld\n",dp[n]);
}
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int p[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        p[i]--;
    }
    solve(p,n);

}
