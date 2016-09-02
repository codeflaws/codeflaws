#include<stdio.h>
#include<stdlib.h>
#define maxi 100005
#define min(a,b) a>b?b:a
struct node{
	int val;
	struct node* next;
};
typedef struct node node;
node* head[maxi];
int tree[maxi],par[20][maxi],r,b[maxi],dep[maxi],sub[maxi],ans[maxi];
void ins(int x,int y)
{
	node* t=malloc(sizeof(node));
	t->val=x;
	t->next=head[y];
	head[y]=t;
}
void dfs1(int cu,int p,int x)
{
	node* t;
	par[0][cu]=p;
	dep[cu]=x;
	for(t=head[cu];t!=NULL;t=t->next)
		if(t->val!=p)
			dfs1(t->val,cu,x+1);
}
void dfs2(int cu,int p)
{
	node* t;
	sub[cu]=1;
	r++;
	for(t=head[cu];t!=NULL;t=t->next)
		if(t->val!=p && !b[t->val]){
			dfs2(t->val,cu);
			sub[cu]+=sub[t->val];
		}
}
int dfs3(int cu,int p)
{
	node* t;
	for(t=head[cu];t!=NULL;t=t->next)
		if(t->val!=p && sub[t->val]>r/2 && !b[t->val])
			return dfs3(t->val,cu);
	return cu;
}
void brek(int cu,int p)
{
	r=0;
	dfs2(cu,cu);
	int cen=dfs3(cu,cu);
	if(p==-1)p=cen;
	tree[cen]=p;
	b[cen]=1;
	node* t;
	for(t=head[cen];t!=NULL;t=t->next)
		if(!b[t->val])
			brek(t->val,cen);
}
int lca(int a,int b)
{
	if(dep[a]>dep[b]){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	int d=dep[b]-dep[a],i;
	for(i=0;i<20;i++)
		if(d&(1<<i))
			b=par[i][b];
	if(a==b)return a;
	for(i=19;i>=0;i--)
		if(par[i][a]!=par[i][b]){
			a=par[i][a];
			b=par[i][b];
		}
	return par[0][a];
}
int dist(int x,int y)
{
	return dep[x]+dep[y]-2*dep[lca(x,y)];
}
void upd(int v)
{
	int x=v;
	while(tree[v]!=v){
		ans[v]=min(ans[v],dist(x,v));
		v=tree[v];
	}
	ans[v]=min(ans[v],dist(x,v));
}
int query(int v)
{
	int x=v,val=1000000001;
	while(tree[v]!=v){
		val=min(val,ans[v]+dist(x,v));
		v=tree[v];
	}
	val=min(val,dist(x,v)+ans[v]);
	return val;
}
int main(int argc, char *argv[])
{
	int n,m,x,y,i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n-1;i++){
		scanf("%d %d",&x,&y);
		ins(x-1,y-1);
		ins(y-1,x-1);
	}
	dfs1(0,0,1);
	for(i=1;i<20;i++)
		for(j=0;j<n;j++)
			par[i][j]=par[i-1][par[i-1][j]];
	brek(0,-1);
	for(i=0;i<n;i++)
		ans[i]=1000000001;
	upd(0);
	while(m--){
		scanf("%d %d",&x,&y);
		if(x==1) upd(y-1);
		else printf("%d\n",query(y-1));
	}
}
