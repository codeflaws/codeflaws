#include<stdio.h>
#include<string.h>
#define max (1000000007)
int a[100],b[100];
int main(int argc, char const *argv[])
{
    int n ,k ,dd;
    int i,j,out=0;
    
    scanf("%d%d%d",&n,&k,&dd);
    
    memset(b,0,sizeof(b[0])*100);
    memset(a,0,sizeof(a[0])*100);
    
    for(i=0;i<=k;++i)
        b[i]=1;
    for(i=0;i<dd;++i)
        a[i]=1;
    for(i=1;i<=n;++i)
        for(j=1;j<=k&&i+j<=n;++j)
        {
            b[i+j]+=b[i];
            b[i+j]%=max;
        }
    for(i=1;i<=n;++i)
        for(j=1;j<dd&&i+j<=n;++j)
        {
            a[i+j]+=a[i];
            a[i+j]%=max;
        }
    
    
     
    out=b[n]-a[n];
    if(out<0)
        out+=max;
    
    printf("%d %d\n",out,(-2)%5);
    return 0;
}