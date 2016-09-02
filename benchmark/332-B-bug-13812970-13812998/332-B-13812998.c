#include<stdio.h>
long long int a[200001],fr[200001][2],back[200001][2];
int main(int argc, char *argv[])
{
    long long int n,i,k,f=0;
    scanf("%lld%lld",&n,&k);
    for(i=1;i<=n;++i)
        scanf("%lld",a+i);
    for(i=1;i<=k;++i)
        f+=a[i];
    fr[k][0]=f,fr[k][1]=1;
    for(i=k+1;i<=n;++i)
    {
        f+=(a[i]-a[i-k]);
        if(f>fr[i-1][0])
            fr[i][0]=f,fr[i][1]=i-k+1;
        else
            fr[i][0]=fr[i-1][0],fr[i][1]=fr[i-1][1];
    }
    f=0;
    for(i=n;i>n-k;--i)
        f+=a[i];
    back[n-k+1][0]=f,back[n-k+1][1]=n-k+1;
    for(i=n-k;i>=1;--i)
    {
        f+=(a[i]-a[i+k]);
        if(f>=back[i+1][0])
            back[i][0]=f,back[i][1]=i;
        else
            back[i][0]=back[i+1][0],back[i][1]=back[i+1][1];
    }
    long long int i1,i2,max=0;
    for(i=k;i<=n-k;++i)
    {
        if(fr[i][0]+back[i+1][0]>max)
            max=fr[i][0]+back[i+1][0],i1=fr[i][1],i2=back[i+1][1];
    }
    printf("%lld %lld",i1,i2);
    return 0;
}
