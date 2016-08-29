#include<stdio.h>
#define N 100000
int main(int argc, char *argv[]) {
	int n,k;
	scanf("%d%d",&n,&k);
	int a[2*N];
	int i;
	//把第k个数等值的值加到最后面
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j=k-1;
	for(i=0;i<n;i++){
		if(j==n){
			j=k-1;
		}
		a[n+i]=a[j];
		j++;
	}
	/*
	for(i=0;i<2*n;i++){
		printf(" %d",a[i]);
	}
	printf("\n");
	*/
	int before=0;
	int count=0;
	int operation=-1;
	for(i=0;i<=2*n-2;i++){
		if(a[i]==before){
			count++;
			if(count>=n){
				operation=i;
				break;
			}
		}else{
			count=1;
			if(count>=n){
				operation=i;
				break;
			}
		}
		before=a[i];
	}
	//printf("operation=%d\n",operation);
	if(operation==-1){
		printf("-1\n");
	}else{
		printf("%d\n",operation-n+1);
	}
	return 0;
}
