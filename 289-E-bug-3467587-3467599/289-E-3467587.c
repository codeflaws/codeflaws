#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 1000010

int a[MAXN];
int used[MAXN];
int f[30];


void init()
{
    int i;
    f[0]=1;
    for(i=1;i<=20;i++)
    {
        f[i]=(f[i-1]<<1);
    }
}

int calc(int x)
{
    if(x==0)return 0;
    int t=0;
    while(f[t]<=x)t++;
    return (f[t]-1)^x;
}

int main(int argc, char *argv[])
{
    init();
    int n;
    int i;
    while(scanf("%d",&n)==1)
    {
        memset(used,0,sizeof(used));
        long long ans=0;
        for(i=n;i>=0;i--)
        {
            if(used[i])continue;
            int x=calc(i);
            used[i]=1;
            used[x]=1;
            a[i]=x;
            a[x]=i;
            ans+=2*(x^i);
        }
        printf("%d\n",ans);
        for(i=0;i<=n;i++)
        {
            if(i==n)printf("%d\n",a[i]);
            else printf("%d ",a[i]);
        }
    }
    return 0;
}