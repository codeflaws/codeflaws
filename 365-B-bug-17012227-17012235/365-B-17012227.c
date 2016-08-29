#define N 100000
#include<stdio.h>
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int a[N];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=2;
	i=0;
	int count=2;
	//(n-3)+(n-2)=n-1
	while(i<n-2){
		if(a[i]+a[i+1]==a[i+2]){
			count++;
		}else{
			if(count>max)max=count;
			count=2;
		}
		i++;
	}
	if(count>max)max=count;
	printf("%d\n",max);
	return 0;
}
