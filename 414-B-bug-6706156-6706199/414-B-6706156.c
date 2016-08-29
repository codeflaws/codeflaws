#include<stdio.h>
#include<string.h>
int N,K,dp[2003][2003];
int find(int cur,int cnt)
{
    if(cnt>K)
    {
        return 1;
    }
    if(dp[cur][cnt]>-1)
    {
        return dp[cur][cnt];
    }
    dp[cur][cnt]=0;
    int i;
    for(i=1;cur*i<=N;i++)
    {
        dp[cur][cnt]=(dp[cur][cnt]+find(cur*i,cnt+1))%1000000009;
    }
    return dp[cur][cnt];
}
int main(int argc, char *argv[])
{
    while(scanf("%d %d",&N,&K)==2)
    {
        memset(dp,-1,sizeof(dp));
        printf("%d\n",find(1,1));
    }
    return 0;
}