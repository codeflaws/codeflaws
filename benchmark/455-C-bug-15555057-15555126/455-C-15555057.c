#include <stdio.h>
int n,m,q,ans;
int e[600010][2],p[300010];
int f[300010];
int root[300010],len[300010];
int max(int a,int b)
{
	return a>b?a:b;
}
void adde(int sn,int fn,int id)
{
	e[id][0] = fn; e[id][1] = p[sn]; p[sn] = id;
}
int findroot(int nod)
{
	if(root[nod] != nod) root[nod] = findroot(root[nod]);
	return root[nod];
}
void dp(int sn,int fa)
{
	int i,fn,mx1 = 0,mx2 = 0;
	for(i=p[sn];i;i=e[i][1])
	{
		fn = e[i][0];
		if(fn == fa) continue;
		dp(fn,sn);
		if(f[fn]+1>mx1) { mx2 = mx1; mx1 = f[fn]+1;}
		else if(f[fn]+1>mx2) mx2 = f[fn]+1;
	}
	f[sn] = mx1;
	ans = max(ans,mx1+mx2);
}
int main(int argc, char *argv[])
{
	int i,sn,fn,op;
	scanf("%d%d%d",&n,&m,&q);
	for(i=1;i<=n;i++) root[i] = i;
	for(i=1;i<=n;i++) f[i] = -1;
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&sn,&fn);
		adde(sn,fn,i<<1); adde(fn,sn,i<<1|1);
		root[findroot(sn)] = findroot(fn);
	}
	for(i=1;i<=n;i++)
	{
		if(f[i]>=0) continue;
		ans = 0; dp(i,0);
		len[findroot(i)] = ans;
	}
	while(q--)
	{
		scanf("%d",&op);
		if(op == 1)
		{
			scanf("%d",&sn);
			printf("%d\n",len[findroot(sn)]);
		}
		else
		{
			scanf("%d%d",&sn,&fn);
			sn = findroot(sn); fn = findroot(fn);
			root[sn] = fn;
			len[fn] = max(max(len[sn],len[fn]),((len[sn]+1)>>1)+((len[fn]+1)>>1)+1);
		}
	}
	return 0;
}