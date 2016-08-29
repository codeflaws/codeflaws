#include <stdio.h>

long long int mod=1000000007, f1, f2;

int main(int argc, char *argv[])
{
    long long int n, ans;
    scanf("%lld %lld %lld", &f1, &f2, &n);
    int a[6]={f1, f2, f2-f1, -f1, -f2, f1-f2};
    ans=a[(n-1)%6];
    if(ans<0)
        ans+=mod;
    printf("%lld\n", ans);
    return 0;
}
