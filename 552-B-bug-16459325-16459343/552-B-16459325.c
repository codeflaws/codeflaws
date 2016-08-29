#include <stdio.h>

long long int n, us = 9, cvp, i, x;

int main(int argc, char *argv[]) {
	scanf("%lld",&n);
	for(i = 1 ; i < 9 ; i++, us *= 10){
		if(n > us){
			cvp += (us)*i;
			n -= us;
		}
		else{
			cvp += (n)*i;
			break;
		}
	}
	printf("%lld",cvp);
	return 0;
}
