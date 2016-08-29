#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[]){
	int i,j;
	long long n,t,k;
	scanf("%lld",&n);
	scanf("%lld",&k);
	if (k<=n/2) printf("%lld",2*k-1);
	else printf("%lld",2*(k-(n+1)/2));
	
	
	
	
	return 0;
}
