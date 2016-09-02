#include <stdio.h>
long long int gcd(long long int a,long long int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main(int argc, char *argv[]) {
    long long int t,a,b,temp,l,g,ans=0;
    scanf("%lld %lld %lld",&t,&a,&b);
    if(a==b)
    {
        printf("1/1");
        return 0;
    }
    if(b>a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    g = gcd(a,b);
    if(b/g>t/a)
    {
        if(b-1>t)
        ans=t;
        else
        ans=b-1;
        g=gcd(ans,t);
        ans=ans/g;
        t=t/g;
        printf("%lld/%lld",ans,t);
        return 0;
    }
    l = (a/g)*b;
    
    ans += t/l;
    
    ans += (t/l)*(b-1);
    //printf("%lld   ",ans);
    if(t%l<b-1)
    ans+=t%l;
    else
    ans+=b-1;
    //printf("%lld",ans);
    g=gcd(t,ans);
    t=t/g;
    ans=ans/g;
    printf("%lld/%lld",ans,t);
    return 0;
}
