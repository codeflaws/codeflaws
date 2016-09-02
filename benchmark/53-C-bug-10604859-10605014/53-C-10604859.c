#include<stdio.h> 
int main(int argc, char *argv[]){
	int n,t,k;
	scanf("%d",&n);
	k=n-1;
	t=n/2;
	while(k>t){
		printf("%d %d ",n-k,k+1);
		k--;
	}
	if(!(n&1))
		printf("%d",n/2);

	return 0;
}
