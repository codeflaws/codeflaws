#include <stdio.h>
#include <stdlib.h>
int h[100002],fr[100002],cn[200002],u[100002],v[100002],a[100002],res,n,m;
void tkiem(int di,int sl)
{
    int i,j;
    fr[di]=1;
    if ((h[di+1]-h[di]==1) &&(di!=1)&&(sl>m)) res--;
    if (h[di+1]-h[di]>1) for (i=h[di]+1;i<=h[di+1];i++)
        if (fr[cn[i]]==0) tkiem(cn[i],((a[cn[i]]==0)&(sl<=m))?0:sl+1);
}
int main(int argc, char *argv[])
{
    int i,j;
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++)
    {
        scanf("%d",a+i+1);
        fr[i+1]=0;
        h[i]=0;
    }
    h[0]=0;
    for (i=0;i<n-1;i++)
    {
        scanf("%d%d",u+i,v+i);
        h[u[i]]++;
        h[v[i]]++;
    }
    res=0;
    for (i=1;i<=n;i++)
    {
        if ((h[i]==1)&&(i!=1)) res++;
        h[i]+=h[i-1];
    }
    h[n+1]=h[n];
    for (i=0;i<n-1;i++)
    {
        cn[h[u[i]]]=v[i];
        cn[h[v[i]]]=u[i];
        h[u[i]]--;
        h[v[i]]--;
    }
    tkiem(1,a[1]==1?1:0);
    printf("%d",res);
    return 0;
}
