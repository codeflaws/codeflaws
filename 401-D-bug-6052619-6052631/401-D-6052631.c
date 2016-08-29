#include <inttypes.h>
#include <inttypes.h>
#include <inttypes.h>
#include <inttypes.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define INF 200000000
int64_t num[10],dp[500000][105];
int64_t jie(int64_t p)
{
    int64_t re,i;
    for(i=1,re=1;i<=p;i++)
        re*=i;
    return re;
}
int main(int argc, char *argv[])
{
    int64_t n[20],m,i,j,k,l,wei;
    char s[20];
    while(scanf("%s%lld",&s,&m)!=EOF)
    {
        wei=strlen(s);
        memset(num,0,sizeof(num));
        for(i=0;i<wei;i++)
        {
            n[i]=s[wei-1-i]-'0';
            num[n[i]]++;
        }
        memset(dp,0,sizeof(dp));
        for(i=0;i<wei;i++)
        {
            if(n[i]!=0)
            dp[1<<i][n[i]%m]=1;
        }
        /*for(i=0;i<wei;i++)
            printf("*%lld %lld %lld\n",i,dp[1<<i][0],dp[1<<i][1]);*/
        for(i=1;i<(1<<wei);i++)
        {
            for(j=0;j<wei;j++)
            {
                if((i|(1<<j))==i)
                {
                    for(k=0;k<m;k++)
                        dp[i][(k*10+n[j])%m]+=dp[i-(1<<j)][k];
                }
            }
        }
        for(i=0;i<=9;i++)
        {
            dp[(1<<wei)-1][0]/=jie(num[i]);
        }
        printf("%lld\n",dp[(1<<wei)-1][0]);
        /*for(i=0;i<1<<wei;i++)
        {
            for(j=0;j<m;j++)
                printf("%lld ",dp[i][j]);
            printf("\n");
        }
        for(i=0;i<wei;i++)
            printf("%lld ",n[i]);
        printf("\n");*/
    }
    return 0;
}
