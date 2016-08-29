#include <stdio.h>
int dp[500100];
int main(int argc, char *argv[])
{
    int n,d,i,x,sum,ans,ans1,j;
    scanf("%d%d",&n,&d);
        sum=0;
        dp[0]=1;
        for(i=0;i<n;i++){
            scanf("%d",&x);
            sum+=x;
            for(j=sum;j>=x;j--){
                if(dp[j-x])
                    dp[j]=1;
            }
        }
        ans=ans1=0;
        while(1)
        {
            j=ans+d;
            while(j>ans&&!dp[j])
                j--;
            if(j==ans)
                break;
            ans=j;
            ans1++;
        }
        printf("%d %d\n",ans,ans1);
    
    return 0;
}

