#include<stdio.h>
#include<stdbool.h>
#define NN 100000
bool seen[NN];
int ai[NN];
int n,k;

bool findPath(int u){
	if(seen[u])return false;
	if(u==k)return true;

	seen[u]=true;
	if(u==n)return false;
	return findPath(u+ai[u-1]);
}
int main(int argc, char *argv[]){
	scanf("%d %d",&n,&k);
	for(int i=0;i<n-1;i++)scanf("%d",&ai[i]);
	if(findPath(1))printf("YES");
	else printf("NO");

	return 0;
}