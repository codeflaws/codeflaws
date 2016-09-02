#include<stdio.h>
#define SIZE 102
#define min(a,b) a<b?a:b
int main(int argc, char *argv[])
{
    int v1,v2;
    scanf("%d%d",&v1,&v2);
    int t,d;
    scanf("%d%d",&t,&d);
    if(v1>v2)
        v1^=v2^=v1^=v2; //swap
    if(d==0)
    {
        printf("%d",v1*t);
        return 0;
    }
    int req_time = (v2-v1)/d + ((v2-v1)%d!=0);
    long long int ans;
    int n = req_time+1;
    ans = n*v1 + n*(n-1)/2*d;       //sum of arithmetic series
    if(req_time+1==t)
    {
        v1 = v1 + req_time*d;
        ans-=v1-v2;
    }
    else
        ans+=v2;
    int i,j;
    i = req_time+2;
    j = t-1;
    v1 = v1+req_time*d;
    for(;i<=j;i++,j--)
    {
        if(i==j)
            ans += min(v1+d,v2+d);
        else
        {
            v1+=d;
            v2-=d;
            ans+=v1+v2;
        }
    }
    printf("%lld",ans);
    return 0;
}