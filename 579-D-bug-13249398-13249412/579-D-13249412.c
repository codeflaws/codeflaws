#include<stdio.h>
long long int max(long long int a,long long int b)
{
 if(a>b)
 return a;
 else return b;
}
int main(int argc, char *argv[])
{
    int i,y=1,n,k,x;
    scanf("%d%d%d",&n,&k,&x);
    for(i=0;i<k;i++)
    y=y*x;
    long long int a[n+1],suffix[n+1],prefix[n+1],ans=0;
    for(i=0;i<=n+1;i++)
    {
        suffix[i]=0;
        prefix[i]=0;
    }
    for(i=1;i<=n;i++)
        scanf("%lld",&a[i]);
         prefix[1]=a[1];
    for( i = 1; i <=n; i++)
        prefix[i] = prefix[i-1] | a[i];
         suffix[n]=a[n];
    for(i = n; i > 0; i--)
        suffix[i] = suffix[i+1] | a[i];
    for(i= 1; i <= n; i++)
        ans = max(ans, prefix[i-1] | (a[i] * y) | suffix[i+1]);
    printf("%lld",ans);
    return 0;
}