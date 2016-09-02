#include <stdio.h>
int root[1010000],w[1010000];
int find(int n)
{
	int r = n;
	while(r != root[r]) r = root[r];
	int x = n, y;
	while(x != r)
	{
		y = root[x];
		root[x] = r;
		x = y;
	}
	return r;
}
void unico(int a,int b)
{
	a = find(a);
	b = find(b);
	if(a == b) return;
	if(w[a] >= w[b])
	{
		root[b] = a;
		w[a] += w[b];
	}
	else
	{
		root[a] = b;
		w[b] += w[a];
	}
}
int main(int argc, char *argv[])
{
	int n,m,i,j,k,a,b;
	scanf("%d%d",&n,&m);
	for (i = 0; i <= n; i++) {
		root[i]=i;
		w[i]=1;
	}
	while(m--)
	{
		scanf("%d%d",&a,&b);
		unico(a,b);
	}
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d%d",&a,&b);
		a = find(a);
		b = find(b);
		if(a == b) root[a] = 0;
	}
	int ans = 0;
	for(i = 1; i <= n; i++) if(root[i] == i && w[i] > ans)ans = w[i];
	printf("%d\n",ans);
}
/****** PCCA -Mon May 07 05:52:29 GMT 2012 *******/