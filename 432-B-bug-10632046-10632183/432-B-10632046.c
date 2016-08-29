#include<stdio.h>
int main(int argc, char *argv[]){
	int i,j,k,l,n,m,a[200001]={0},b[200001]={0},c[200001],d[200001];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&c[i],&d[i]);
		a[c[i]]++;
		b[d[i]]++;
	}
	for(i=1;i<=n;i++)
		printf("%d %d\n",a[c[i]]+b[c[i]],b[d[i]] - a[d[i]]);
	return 0;
}
