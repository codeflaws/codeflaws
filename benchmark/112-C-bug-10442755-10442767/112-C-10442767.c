#include<stdio.h>
#define ll long long
ll n,x,y,i;
int main(int argc, char *argv[]){
	scanf("%lld %lld %lld",&n,&x,&y);
	if((n-1) + (y-n+1)*(y-n+1) < x || y-n+1 < 1){
		puts("-1");
		return 0;
	}
	else{
		for(i=1;i<=n-1;i++)
			printf("1 ");
		printf("%lld",y-n+1);
	}
	return 0;
}
