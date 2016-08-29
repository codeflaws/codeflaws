#include <stdio.h>

int main(int argc, char *argv[])
{
	int mul[10] = {2,6,2,3,3,4,2,5,1,2} ;
	int n ;
	int ans ;
	
	scanf("%d", &n) ;
	ans = mul[n/10] * mul[n%10] ;
	printf("%d\n", ans) ;
	
	return 0 ;
}

