#include<stdio.h>
long long int mut(long long int a){return (a<0)?-a:a;}
long long int min(long long int a,long long int b){return (a>b)?b:a;}
long long int max(long long int a,long long int b){return (a<b)?b:a;}
int main(int argc, char *argv[]){
	long long int i,n,x[100005] = {0};
	scanf("%lld",&n);
	for(i = 0 ; i < n ; i++)
		scanf("%lld",&x[i]);
	printf("%lld %lld\n",x[1]-x[0],x[n-1]-x[0]);
	for(i = 1 ; i < n-1 ; i++)
		printf("%lld %lld\n",max(mut(x[i]-x[0]),mut(x[i]-x[n-1])),min(mut(x[i]-x[i-1]),mut(x[i]-x[i+1])));
	printf("%lld %lld\n",x[n-1]-x[n-2],x[n-1]-x[0]);
	return 0;
}
