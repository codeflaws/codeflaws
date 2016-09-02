#include <stdio.h>

long long seq[300000] = {0};
long long add[300000] = {0};
int N = 1,Q;

int main(int argc, char *argv[]){
	int i,q,x,n;
	long long sum = 0;
	scanf("%d",&Q);

	for(i = 0;i < Q; i++){
		scanf("%d",&q);
		if(q == 1){
			scanf("%d%d",&n,&x);
			sum += x*n;
			add[n-1] += x;
		}else if(q == 2){
			scanf("%d",&x);
			seq[N++] = x;
			sum += x;
		}else{
			--N;
			sum -= seq[N] + add[N];
			add[N-1] += add[N];
			add[N] = 0;
		}
		printf("%.6f\n", (double)sum/N);
	}

	return 0;
}
