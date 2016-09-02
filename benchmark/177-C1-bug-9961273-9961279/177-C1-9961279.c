#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int to, nextid;
}ne;
int l[100005];
ne le[200005];
int d[2001][2001];
int s[2001],vis[2001];
int c;
void dfs(int a)
{
    s[c++]=a;
    vis[a]=1;
    int i;
    for(i=l[a];i!=-1;i=le[i].nextid)
    {
        if(vis[le[i].to]==0) {dfs(le[i].to);}
    }
}

int main(int argc, char *argv[])
{
int n,i,u,v,m,k,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<=n+5;i++) l[i]=-1;
    for(i=0;i<k;i++)
    {
        scanf("%d%d",&u,&v);
        le[2*i].nextid=l[u];
        le[2*i].to=v;
        l[u]=2*i;
        le[2*i+1].nextid=l[v];
        le[2*i+1].to=u;
        l[v]=2*i+1;
    }
    
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&u,&v);
        d[u][v]=d[v][u]=1;
    }
    int ans=0,l;
    for(i=1;i<=n;i++)
    {
        c=0;
        if(vis[i]==0) {dfs(i);
        for(j=0;j<c;j++)
        {
            for(l=j;l<c;l++)
            {
                if(d[s[j]][s[l]]) c=0;
            }
        }
        if(c>ans) ans=c;
    }
    }
    printf("%d",ans);
    return 0;
}
