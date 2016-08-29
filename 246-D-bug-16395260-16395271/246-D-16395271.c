#include <stdio.h>
#include <stdlib.h>
int n,m,ans,c[100010],cnt[100010];
int e[200010][2],p[100010];
int vis[100010],cc[100010];
int comp(const void *a, const void *b)
{
	return c[*(int*)a] - c[*(int*)b];
}
void adde(int sn,int fn,int id)
{
	e[id][0] = fn; e[id][1] = p[sn]; p[sn] = id;
}
int main(int argc, char *argv[])
{
	int i,j,sn,fn;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++) { scanf("%d",&c[i]); cc[i] = i;}
	qsort(cc+1,n,sizeof(int),comp);
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&sn,&fn);
		adde(sn,fn,i<<1); adde(fn,sn,i<<1|1);
	}
	for(i=1;sn=cc[i],i<=n;i++) for(j=p[sn];j;j=e[j][1])
	{
		fn = e[j][0];
		if(c[fn]<=c[sn] || vis[c[fn]] == c[sn]) continue;
		cnt[c[sn]]++; cnt[c[fn]]++;
		vis[c[fn]] = c[sn];
	}
	for(i=2,ans=c[cc[1]];i<=n;i++) if(cnt[c[cc[i]]]>cnt[ans]) ans = c[cc[i]];
	printf("%d",ans);
	return 0;
}