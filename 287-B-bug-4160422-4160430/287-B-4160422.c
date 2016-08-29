#include<stdio.h>
#include<math.h>
#define min(a,b) ((a)>(b)?(b):(a))
#define esp 1e-6

int main(int argc, char *argv[])
{
    long long n,k;
    scanf("%lld%lld",&n,&k);
    n--,k--;
    if((1+k)*k/2<=n)
        printf("%lld\n",(1+k)*k/2==n?k:-1);
    else
    {
        double a=2*k+1,b=sqrt(a*a-8*n);
        double ans=(a+b)/2;
        double ans1=(a-b)/2;
        ans=min(ans,ans1);
        if(fabs(ans-floor(ans))<esp)
        printf("%lld\n",(long long)(ans+0.5));
        else if(fabs(ans-floor(ans))>0.5)
            printf("%lld\n",(long long)ans+1);
        else printf("%lld\n",(long long)(ans+0.5)+1);
    }
    return 0;
}
