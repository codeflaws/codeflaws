#include<stdio.h>
void fun(int x) {
	if(x>=5) {
		printf("-O|");
		x-=5;
	}
	else
		printf("O-|");
	int sum=0;
	while(x!=0) {
		printf("O");
		x--;
		sum++;
	}
	printf("-");
	sum++;
	while(sum<5) {
		printf("O");
		sum++;
	}
	printf("\n");
	return ;
}
int main(int argc, char *argv[]) {
	int i,j,k,l,n,m;
	scanf("%d",&n);
	if(n==0)
		fun(0);
	while(n!=0) {
		fun(n%10);
		n /= 10;
	}
	return 0;
}
