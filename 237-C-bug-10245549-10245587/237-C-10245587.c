#include <stdio.h>
#include <stdbool.h>

#define maxN 1000001

bool isP[maxN];
int ps[maxN];

bool isPrime( int n ) {
	int i;

	for( i = 2; (long long) i * i <= n; i++ )
		if( n % i == 0 ) return false;
	
	return true;
}

int main(int argc, char *argv[]) {
	int i, j, c;

	isP[2] = isP[3] = isP[5] = 1;

	for( i = 7; i < maxN; i += 2 )
		if( isPrime(i) ) isP[i] = 1;
	
	ps[0] = 0;
	for( i = 1; i < maxN; i++ )
		ps[i] = ps[i-1] + isP[i];
	
	int a, b, k;
	scanf("%i %i %i", &a, &b, &k);
	
	int lo = 0, hi = b-a+1, ans = -1, mid;
	while( lo <= hi ) {
		mid = (lo + hi) / 2;

		int cnt = ps[a+mid-1] - ps[a-1];
		
		bool ok = 1;
		if( cnt < k ) ok = 0;

		for( i = a+1; i <= b-mid+1; i++ )
			if( ps[i+mid-1] - ps[i-1] < k ) ok = 0;

		if( ok ) {
			ans = mid;
			hi = mid - 1;
		} else lo = mid + 1;

	}

	printf("%i\n", ans);


	return 0;
}
