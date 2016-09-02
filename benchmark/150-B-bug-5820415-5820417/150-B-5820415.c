#include <stdio.h>

#define BASE 1000000007

int pow(int a, int b) {
	if (b == 0) return 1;
	if (b == 1) return a;

	long long ans = pow(a, b/2);
	ans = (ans * ans) % BASE;
	ans = (ans * pow(a, b%2)) % BASE;
	return (int) ans;
}

int main(int argc, char *argv[]) {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	printf("%d\n", pow(100000, 2));
	if (k > n || k == 1) printf("%d\n", pow(m, n));
	else if (k == n) printf("%d\n", pow(m, (n + 1)/2));
	else if (k % 2) printf("%d\n", m*m);
	else printf("%d\n", m);
	
	return 0;
}