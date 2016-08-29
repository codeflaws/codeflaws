#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, j;
    int m, k;

    scanf( "%*d %d %d", &m, &k );

    printf( "%d\n", m * ( m - 1 ) / 2 );
    for ( i = 1; i <= m - 1; i++ )
        for ( j = i + 1; j <= m; j++ )
            printf( "%d %d\n", i, j );

    return 0;
}
