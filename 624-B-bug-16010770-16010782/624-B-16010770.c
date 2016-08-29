#include<stdio.h>
#define N 26
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int a[N];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//26*10^9应该超过了32bit int的取值范围
	//所以这个最多字母应该是一个long long型
	//sort
	for(i=0;i<n-1;i++){
		int max=i;
		for(j=i+1;j<n;j++){
			if(a[j]>a[max])max=j;
		}
		if(max!=i){
			//swap max i
			int tmp=a[max];
			a[max]=a[i];
			a[i]=tmp;
		}
	}
	/*
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
	printf("\n");
	*/
	long long max_length=a[0];
	int current_max=a[0];
	i=1;
	while(i<n){
		if(a[i]>=current_max){
			max_length+=(current_max-1);
			current_max=current_max-1;
		}else{
			max_length+=a[i];
			current_max=a[i];
		}
		i++;
	}
	printf("%lld\n",max_length);


	return 0;
}
