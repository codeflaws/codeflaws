#include<stdio.h>
int main(int argc, char *argv[])
{
    long long x,y,n,ans;
    scanf("%lld%lld%lld",&x,&y,&n);
    int a[6]={x,y,y-x,-x,-y,x-y};
    ans=a[(n-1)%6];
    if(ans<0)ans=(ans%1000000007)+1000000007;
    printf("%lld",ans);
    return 0;



}
