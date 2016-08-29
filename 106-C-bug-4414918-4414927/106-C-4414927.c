#include <stdio.h>

int dp[1001][3000];

int main(int argc, char *argv[]){
    int i,j,k,n,m,c0,d0,a,b,c,d;
    scanf("%d%d%d%d",&n,&m,&c0,&d0);
    for(i=0;i<n;i++){
        dp[i][0]=0;
    }
    k=1;
    for(i=0;i<m;i++){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        for(a-=b;a>=0;a-=b){
            dp[0][k]=0;
            for(j=1;j<=n;j++){
                dp[j][k]=dp[j][k-1];
                if(c<=j&&(dp[j-c][k-1]+d>dp[j][k])){
                    dp[j][k]=dp[j-c][k-1]+d;
                }
            }
            k++;
        }
    }
    i=1;
    while(i){
        i=0;
        dp[0][k]=0;
        for(j=1;j<=n;j++){
            dp[j][k]=dp[j][k-1];
            if(c0<=j&&(dp[j-c0][k-1]+d0>dp[j][k])){
                dp[j][k]=dp[j-c0][k-1]+d0;
                i=1;
            }
        }
        k++;
    }
    printf("%d\n",dp[n][k-1]);
    return 0;
}
