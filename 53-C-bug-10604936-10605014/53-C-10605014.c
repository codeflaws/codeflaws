#include<stdio.h> 
int main(int argc, char *argv[]){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		printf("%d %d ",i,n-i+1);
	}
	if(n&1)
		printf("%d",n/2+1);

	return 0;
}
