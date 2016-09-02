#include <stdio.h>
#include <math.h>

long int roads[1234567];

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);

	int i = 0;
	int x = 1 << ( n + 1 ) - 1;
	for ( i = 2; i <= x; i++ ) scanf("%ld", roads+i);

	long int answer, a, b;
	answer = 0;
	for ( i = ( 1 << n ) - 1; i >= 1; i-- ) {
		a = roads[i*2];
		b = roads[i*2+1];

		roads[i] += a > b ? a : b;
		answer += 2 * ( a > b ? a : b ) - a - b;
	}

	printf("%ld\n", answer);

	return 0;
}