#include<stdio.h>
#include<stdlib.h>
int dp[5000][2];
//dp[i][0] stores the min num of ops,-1 means not possible
//dp[i][1] stores sum of last block.
//store the min block sum among all 'min' num of operations
int main(int argc, char *argv[])
{
    int i,j,k,n,opt;
    int max=0,sum=0;
    scanf("%d",&n);
    int *a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        dp[i][0]=0;dp[i][1]=0;
    }
    dp[0][0]=1;
    dp[0][1]=a[0];
    for(i=1;i<n;i++)
    {
        sum=0;opt=0;max=0;
        for(j=i;j>0;j--)
        {
            sum+=a[j];
            if(sum>=dp[j-1][1] )
            {
                if(max<dp[j-1][0])
                {
                  max=dp[j-1][0];
                  opt=sum;
                }
            }
        }
        if(max==0)
        {
            dp[i][0]=1;
            dp[i][1]=sum;
        }
        else
        {
            dp[i][0]=max+1;
            dp[i][1]=opt;
        }
    }
    printf("%d\n",n-dp[n-1][0]);
    return(0);
}
