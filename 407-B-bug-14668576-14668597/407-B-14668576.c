#include<stdio.h>
#define MOD 1000000007
long long int a[1001],d[1001];
int main(int argc, char *argv[])
{
    int n,i,x;
    scanf("%d%d",&n,&x);
    a[1]=d[1]=2;
    for(i=2;i<=n;++i)
    {
        scanf("%d",&x);
        a[i]=(2+(d[i-1]-d[x-1]))%MOD;
        d[i]=(a[i]+d[i-1])%MOD;
    }
    printf("%lld",d[n]);
    return 0;
}
