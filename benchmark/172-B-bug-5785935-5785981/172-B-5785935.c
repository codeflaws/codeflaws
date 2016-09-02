#include <stdio.h>

#define MAXN 100000

int main(int argc, char *argv[]) {
	int a, b, m, r, psr[MAXN+2];
	scanf("%d %d %d %d", &a, &b, &m, &r);
	
	int count = 0;
	while (psr[r] == 0) {
		psr[r] = ++count;
		r = (a * r + b) % m;
	}
	
	printf("%d\n", count - psr[r] + 1);
	
	return 0;
}