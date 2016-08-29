#include<stdio.h>
#include<stdlib.h>

int arr[100009];
int cnt[100009];
int dp[100009];
int mmax(int a,int b){return a>b?a:b;}
int main(int argc, char *argv[])
{
    int n,i,j,k,maxl;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",arr+i);

    k=1;
    cnt[0]=1;
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        cnt[i] = cnt[i-1]+1;
        else
        cnt[i]=1;
    }
    int ans =-1;
    for(i=0;i<n;i++)
    {
        if(i-cnt[i]>=0)
        dp[i] = cnt[i]+1;
        else
            dp[i] = cnt[i];
        if(i-cnt[i]>=0 && cnt[i-cnt[i]] ==1)
            dp[i] = mmax(dp[i],cnt[i]+1);
        else if(i-cnt[i]>=0 && ( arr[i-cnt[i]+2]-arr[i-cnt[i]]>1 ||   arr[i-cnt[i]+1]-arr[i-cnt[i]-1]>1 ) && cnt[i]!=1)
        dp[i] = mmax(dp[i],cnt[i-cnt[i]]+cnt[i]);
        else if(cnt[i]==1 && i-1>=0)
        {
            dp[i] = mmax(dp[i],1+cnt[i-1]);
        }

        if(dp[i]>ans)
        ans = dp[i];
    }

    printf("%d\n",ans);
    return 0;
}
