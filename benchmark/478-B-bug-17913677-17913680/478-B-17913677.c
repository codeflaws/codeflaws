#include <stdio.h>

int main(int argc, char *argv[])
{
    long long n ,m;

    scanf( "%lld%lld", &n, &m);

	printf("%lld%lld",( ( n / m - 1 ) * ( n / m ) / 2 ) * ( m - n % m ) + ( ( n / m ) * ( n / m + 1 ) / 2 ) * ( n % m ), ( n - m ) * ( n - m + 1 ) / 2 );

	return 0;
}
