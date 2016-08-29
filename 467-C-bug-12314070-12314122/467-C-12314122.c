#include<stdio.h>
long long int dp[5001][5002];
int main(int argc, char *argv[])
{
    long long int n,m,k,max=0;
    scanf("%lld%lld%lld",&n,&m,&k);
    long long int arr[5001],i,a,j;
    arr[0]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        arr[i]=arr[i-1]+a;
    }
    for(i=0;i<=k;i++)
    {
        for(j=0;j<=n+1;j++)
        dp[i][j]=0;
    }
    for(i=1;i<=k;i++)
    {
        for(j=n-m+1;j>=1;j--)
        {
                if(arr[j+m-1]-arr[j-1]+dp[i-1][j+m]>dp[i][j+1])
                dp[i][j]=arr[j+m-1]-arr[j-1]+dp[i-1][j+m];
                else
                dp[i][j]=dp[i][j+1];
            
        }
    }
    printf("%lld",dp[k][1]);
    return 0;
}