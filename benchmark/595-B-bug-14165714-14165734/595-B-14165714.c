#include<stdio.h>
long long a[100005];
long long b[100005];
long long big=10e8+7;
int main(int argc, char *argv[])
{
    //#ifndef ONLINE_JUDGE
    //    freopen("I.in","r",stdin);
    //#endif // ONLINE_JUDGE
    long long n,k,i,ans=1,curr,mnum=1,tot,cut,u,l;
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n/k;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n/k;i++)
        scanf("%lld",&b[i]);
    for(i=0;i<k;i++)
    {
        mnum=mnum*10;
    }
    //printf("%d\n",mnum);
    for(i=0;i<n/k;i++)
    {
        curr=a[i];
        tot=1+(mnum-1)/curr;
        u=((b[i]+1)*(mnum/10))-1;
        l=(b[i]*mnum/10);
        //printf("%lld %lld %lld\n",u,l,l%curr);
        if(l%curr==0)
        {
            cut=1+u/curr-l/curr;
        }
        else
            cut=u/curr-l/curr;
        printf("%lld %lld\n",tot,cut);
        ans=((ans%big)*(tot-cut)%big)%big;
        //printf("%lld\n",big);
    }
    printf("%lld",ans);
    return 0;
}
