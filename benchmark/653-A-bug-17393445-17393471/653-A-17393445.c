#include<stdio.h>
#define T 1001
int main(int argc, char *argv[]) {
	//因为ti的值最大是1000，所以我选择用exist方法
	int n;
	scanf("%d",&n);
	char exist[T];
	int i;
	for(i=0;i<T;i++){
		exist[i]=0;
	}
	for(i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		exist[t]=1;
	}
	int count=0;
	for(i=1;i<T;i++){
		if(exist[i]){
			count++;
			if(count>=3){
				printf("YES\n");
			}
		}else{
			count=0;
		}
	}
	printf("NO\n");
	return 0;
}
