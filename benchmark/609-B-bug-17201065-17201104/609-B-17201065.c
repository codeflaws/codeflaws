#include<stdio.h>
#define M 11
int main(int argc, char *argv[]) {
	int n,m;
	scanf("%d%d",&n,&m);
	int genre[M];
	int i;
	for(i=0;i<n;i++){
		genre[i]=0;
	}
	for(i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		genre[a]++;
	}
	/*
	for(i=1;i<=m;i++){
		printf(" %d:%d",i,genre[i]);
	}
	printf("\n");
	*/
	long long options=0;
	for(i=1;i<m;i++){
		//如果第一本书从第i类里找，有genre[i]种可能
		//那么第二本书从非i类里找，有n-genre[i]种可能
		if(genre[i]>0){
			options+=genre[i]*(n-genre[i]);
			n=n-genre[i];
		}
	}
	printf("%lld\n",options);
	return 0;
}
