#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j=4,min,arr[65]={0,1,10,11,100,101,110,111,0};
    scanf("%d",&n);
    int dp[n+1],minarr[n+1];
    dp[0]=0;
    dp[1]=1;
    minarr[0]=0;
    minarr[1]=1;
    for(i=8;i<65;i=i+2)
    {
        arr[i]=arr[j]*10;
        arr[i+1]=arr[i]+1;
        j++;
    }
    
    for(j=2;j<=n;j++)
    {
        min=1000000;
        for(i=0;j>=arr[i];i++);
        i--;
        while(i>0)
        {
            if(min>1+dp[j-arr[i]])
            {
                min=1+dp[j-arr[i]];
                minarr[j]=i;
            }
            i--;
        }
        
        dp[j]=min;
    }
    printf("%d\n",dp[n]);
    j=n;
    while(minarr[j]!=0)
    {
        printf("%d ",arr[minarr[j]]);
        j=j-arr[minarr[j]];
    }
    
    return 0;
}