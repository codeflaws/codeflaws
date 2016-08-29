#include<stdio.h>
#define N 11
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int positive[N];
	int negative[N];
	int zero=0;
	int i;
	for(i=0;i<N;i++){
		positive[i]=0;
		negative[i]=0;
	}
	for(i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		if(t==0){
			zero++;
		}else if(t>0){
			positive[t]++;
		}else if(t<0){
			negative[-t]++;
		}
	}
	/*
	for(i=0;i<N;i++){
		if(positive[i]>0 || negative[i]>0)
			printf("%d:+%d -%d\n",i,positive[i],negative[i]);
	}
	*/

	long long result=0;
	for(i=1;i<N;i++){
		if(positive[i]>0 && negative[i]>0){
			result+=(long long)positive[i]*(long long)negative[i];
		}
	}
	if(zero>1){
		result+=(zero*(zero-1))/2;
	}
	printf("%lld\n",result);

	return 0;
}
