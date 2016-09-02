#include <stdio.h>

int main(int argc, char *argv[]) {
    int k;
    scanf("%i", &k);

    if( k % 2 == 0 ) {
	puts("NO");
	return 0;
    }
    
    int n = 4 * (k - 1) + 2;
    int m = k * n / 2;

    printf("%i %i\n", n, m);

    int shift = 2 * (k - 1);
    
    int i, j;
    for( i = 1; i <= k - 1; i++ )
	for( j = k; j <= 2 * k - 2; j++ ) {
	    printf("%i %i\n", i, j);
	    printf("%i %i\n", i + shift, j + shift);
	}

    for( i = k; i <= 2 * (k - 1); i += 2 ) {
	printf("%i %i\n", i, i + 1);
	printf("%i %i\n", i + shift, i + shift + 1);
    }

    int l0 = n - 1, l1 = n;

    printf("%i %i\n", l0, l1);

    for( i = 1; i <= k - 1; i++ ) {
	printf("%i %i\n", l0, i);
	printf("%i %i\n", l1, i + shift);
    }
	
    return 0;
}
