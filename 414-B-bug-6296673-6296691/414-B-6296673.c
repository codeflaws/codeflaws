#include<stdio.h>
long long dp[2050][2050],no=1000000007;
int main(int argc, char *argv[])
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
            dp[k][i]=1;
    int j,l;
    for(i=k-1;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            for(l=1;j*l<=n;l++)
                dp[i][j]=(dp[i][j]+dp[i+1][j*l])%no;
            printf("%lld\t",dp[i][j]);
        }
    }
    long long tot=0;
    for(i=1;i<=n;i++)
        tot=(tot+dp[1][i])%no;
    printf("%lld",tot);
    return 0;
}
