#include <stdio.h>

typedef long long ll;
#define MOD 1000000007
ll dp[1000100];

int main(int argc, char *argv[]) {
    int n,two,i,a;
    ll r;
    scanf("%d",&n);
    for(i=two=0;i<n;i++) scanf("%d",&a),two+=a==1;
    dp[1]=1; dp[2]=2; dp[3]=4;
    for(i=4;i<=n;i++) dp[i]=(dp[i-1]+(i-1LL)*dp[i-2])%MOD;
    r=dp[two];
    for(i=two+1;i<=n;i++) r=(r*i)%MOD;
    printf("%I64d\n",r);
    return 0;
}
