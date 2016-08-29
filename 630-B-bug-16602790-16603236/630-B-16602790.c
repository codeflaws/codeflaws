#include <stdio.h>

int main(int argc, char *argv[]) {
	long long int n, t;
	scanf("%lld %lld", &n, &t);
	printf("%.20lf\n", (double)n + n * t * 0.000000011);
	return 0;
}

