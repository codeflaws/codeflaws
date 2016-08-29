#include<stdio.h>
int main(int argc, char *argv[]) {

	int a,b,i,j,n,k;
	scanf("%d %d",&n,&k);
	j=n%k; i=n/k;
	for(a=1; a<=n-j; a++)
		printf("%d ",i);
	for(a=1; a<=j; a++)
		printf("%d ",i+1);
	

return 0;
}
