#include <stdio.h>

int main(int argc, char *argv[]) {
	long long int n, t;
	scanf("%lld %lld", &n, &t);
	printf("%.30lf\n", (double)n * pow(1.000000011, t));
	return 0;
}

