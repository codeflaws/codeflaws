#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	unsigned long long n;
	
	unsigned long long res = 1;
	
	int d1, d2, d3, d4, d5;
	
	scanf("%llu", &n);
	
	d1 = n / 10000;
	d2 = n / 1000 - 10 * d1;
	d3 = n / 100 - 100 * d1 - 10 * d2;
	d4 = n / 10 - 1000 * d1 - 100 * d2 - 10 * d3;
	d5 = n - 10000 * d1 - 1000 * d2 - 100 * d3 - 10 * d4;
	
// // 	printf("%d%d%d%d%d\n", d1, d2, d3, d4, d5);
	
	n = 10000 * d1 + 1000 * d3 + 100 * d5 + 10 * d4 + d2;
// // 	printf("%lld\n", n);
	
	res = (n * n) % 100000;
	res = (res * res) % 100000;
	res = (res * n) % 100000;
	
	printf("%llu\n", res);
	
	return 0;
	
}
