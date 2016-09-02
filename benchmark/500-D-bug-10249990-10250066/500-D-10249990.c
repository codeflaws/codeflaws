#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#define MAX 100009
typedef struct node{
	long long int val;
	struct node *next;
}node;
typedef struct edge{
	long long int weight;
	long long int start;
	long long int end;
}edge;
edge ed[MAX];
node *a[MAX];
bool visited[MAX];
long long int dis[MAX];
long long int min(long long int x,long long int y){
	if(x<y)
		return x;
	return y;
}
node* insert(node *head,long long int value){
	node *p;
	p=(node *)malloc(sizeof(node));
	p->val=value;
	p->next=head;
	return p;
}
void dfs(long long int src){
		visited[src]=1;
		node *tmp=a[src];
		while(tmp!=NULL){
			if(!visited[tmp->val]){
				dfs(tmp->val);
				dis[src]+=dis[tmp->val];
			}
			tmp=tmp->next;
		}
}
int main(int argc, char *argv[]){
	long long int w,i,x,y,n,m,q,ans=0;
	scanf("%lld",&n);
	memset(visited,0,sizeof(visited));
	for(i=1;i<=n;i++){
		dis[i]=1;
		a[i]=NULL;
	}
	for(i=0;i<n-1;i++){
		scanf("%lld%lld%lld",&x,&y,&w);
		ed[i].start=x;
		ed[i].weight=w;
		ed[i].end=y;
		a[x]=insert(a[x],y);
		a[y]=insert(a[y],x);
	}
	dfs(1);
	for(i=0;i<n-1;i++)
		ans+=(ed[i].weight)*(fmin(dis[ed[i].end],dis[ed[i].start]))*(n-(fmin(dis[ed[i].end],dis[ed[i].start])));
	//printf("%lld\n",ans);
	scanf("%lld",&q);
	while(q--){
	scanf("%lld%lld",&x,&y);
	x--;
	double diff=ed[x].weight-y;
	ed[x].weight=y;
	ans-=(fmin(dis[ed[x].end],dis[ed[x].start]))*(n-(fmin(dis[ed[x].end],dis[ed[x].start])))*(diff);
	double result=ans*6/(n*(n-1));
	printf("%.11lf\n",result);
	}
	return 0;
}
