#include<stdio.h>
#include<stdlib.h>
#define N 100000
int compare(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
void sort(int a[],int n){
	qsort(a,n,sizeof(int),compare);
}
int main(int argc, char *argv[]) {
	int n,m;
	scanf("%d%d",&n,&m);
	int i;
	int a[N];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n);
	int j=0;
	int t[N];
	int nt=0;
	int sum=0;
	for(i=1;i<m;i++){
		if(a[j]==i){
			j++;
		}else{
			if(sum+i<=m){
				t[nt]=i;
				nt++;
				sum+=i;
			}else{
				break;
			}
		}
	}
	printf("%d\n",nt);
	for(i=0;i<nt;i++){
		printf(" %d",t[i]);
	}
	printf("\n");
	return 0;
}
