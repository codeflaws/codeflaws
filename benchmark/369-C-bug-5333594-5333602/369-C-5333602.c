#include <stdio.h>
#define MAXN 100000
struct node
{
    int v,t,next;
}e[2*MAXN];
int tot,T;
int g[MAXN+1],v[MAXN],sum[MAXN],ans[MAXN];
void add(int u,int v,int t)
{
    tot++;
    e[tot].v = v; e[tot].t = t;
    e[tot].next = g[u];
    g[u] = tot;
}
void dfs(int x)
{
    int k = g[x];
    v[x] = 1;
    while (k != 0)
    {
        if (v[e[k].v] == 0)
        {
            dfs(e[k].v);
            sum[x] += sum[e[k].v];
            if (!sum[e[k].v] && e[k].t)
            {
                sum[x]++;
                ans[++T] = e[k].v;
            }
        }
        k = e[k].next;
    }
}
int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        int x,y,t;
        scanf("%d %d %d",&x,&y,&t);
        add(x,y,t-1);
        add(y,x,t-1);
    }
    dfs(1);
    printf("%d\n",T);
    for (i=1;i<=T;i++)
        printf("%d ",ans[i]);
    return 0;
}
