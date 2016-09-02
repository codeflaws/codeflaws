#include <stdio.h>
#include <stdlib.h>
typedef long long int ll;
ll prime[10000001];
ll numbre[10000001];
ll ans[10000001];
int main(int argc, char *argv[])
{
    ll i,j;
    for(i=2;i<=10000000;i++)
    {
        prime[i]=1;
    }
    for(i=2;i<=10000000;i++)
    {
        if (prime[i]==1)for(j=i+i;j<=10000000;j+=i)
            prime[j]=i;
    }
    ll n,a,c,max=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a>max) max=a;
        if(prime[a]==1) {
                numbre[a]++;
                a=1;
            }
        while(prime[a]>1)
        {
                numbre[prime[a]]++;
                c=prime[a];
                a=a/prime[a];
                while(c==prime[a]|| a==c)
                {
                    a=a/c;
                }
        }
         if(prime[a]==1) {
                numbre[a]++;

            }
    }
    ll q;
    scanf("%lld",&q);
    for(i=2;i<=max;i++)
    {
        ans[i]=ans[i-1]+numbre[i];
    }
    ll b;
    for(i=0;i<q;i++)
    {
        scanf("%lld%lld",&a,&b);
        if (a>10000000) a=10000000;
        if (b>10000000) b=10000000;
        printf("%lld\n",ans[b]-ans[a-1]);
    }
    return 0;
}
