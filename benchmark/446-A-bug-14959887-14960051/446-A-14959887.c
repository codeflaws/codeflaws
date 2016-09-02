#include <stdio.h>

int main(int argc, char *argv[])
{
     int n,i,a[100005];
     scanf("%d",&n);
     
     for (i=0;i<n;i++)
     scanf("%d",&a[i]);
     
     int dp[n],dp2[n];
     dp[0]=1;
     
     for (i=1;i<n;i++)
     dp[i]=((a[i]>a[i-1])?dp[i-1]+1:1);
     
     dp2[n-1]=1;
     for (i=n-2;i>=0;i--)
     dp2[i]=((a[i]<a[i+1])?dp2[i+1]+1:1);
     
     int max=1;
     for (i=0;i<n-1;i++)
     {
         if (dp[i]+dp2[i+1]>max&&a[i]<a[i+2]-1)
         max=dp[i]+dp2[i+1];
         
         else if (a[i+1]<=a[i]&&dp[i]+1>max)
         max=dp[i]+1;
         
         if (dp2[i+1]+1>max)
         max=dp2[i+1]+1;
         
     }
     
     printf("%d\n",max);
     return 0;
}
     
     
     