#include<stdio.h>
#include<string.h>
#define MOD 1000000007
typedef long long int ll;
ll p[100001];
char a[100003];
void powers()
{
    int i;
    p[0]=1;
    for(i=1;i<=100001;i++)
        p[i]=(p[i-1]*2)%MOD;
}
ll powe(ll b,ll n)
{
    if(n==0)return 1;
    ll a=powe(b,n/2);
    if(n%2==0)
        return (a*a)%MOD;
    else
        return ((a*a)%MOD*b)%MOD;
}
int main(int argc, char *argv[])
{
    powers();
    int i;
    ll t=0,l,k;
    scanf("%s",a);
    scanf("%I64d",&k);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='0' || a[i]=='5')
        t=(t+p[i])%MOD;
    }
    ll t2=powe(2,(ll)(l*k))-1;
    while(t2<0)
        t2+=MOD;
   // printf("%lld\n",t2);
    ll den=powe(2,l)-1;
    while(den<0)
        den+=MOD;
    //printf("%lld\n",den);
    ll invden=powe(den,MOD-2);
    //printf("%lld\n",invden);
    t2=(t2*invden)%MOD;
    //printf("%lld\n",t2);
    ll ans=(t*t2)%MOD;
    printf("%I64d\n",ans);
    return 0;
}
