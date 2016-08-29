#include<stdio.h>
typedef long long ll;
ll gcd(ll x,ll y)
{
    if(x%y==0)
        return y;
    return gcd(y,x%y);
}
ll max(ll x,ll y)
{
    return x>y?x:y;
}
ll min(ll x,ll y)
{
    return x<y?x:y;
}
int main(int argc, char *argv[])
{
    ll k,t,a,b,x,y,m,l;
    scanf("%lld%lld%lld",&t,&a,&b);
    x=max(a,b);
    y=min(a,b);
    if(t<x && y==1)
    {
        printf("0/1");
        return 0;
    }
    m=gcd(x,y);
    if((((x/m)*(y/m))*m)/(x/m)==y)
    {
        k=((x/m)*(y/m))*m;
        l=t/k;
        a=y*l;
        //printf("%lld %lld %lld\n",l,t,k);
        b=t%k;
        if(b<y)
            a+=b;
        else
            a+=y-1;
        b=gcd(t,a);
        printf("%lld/%lld",a/b,t/b);
    }
    else if(t>=y)
    {
        b=gcd(t,y-1);
        printf("%lld/%lld",(y-1)/b,t/b);
    }
    else
        printf("1/1");
    return 0;
}
