#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j, n, k;

    scanf( "%d%d", &n, &k );
    if ( ( n - 1 ) / 2 < k ) {
        puts( "-1" );
        return 0;
    }
    printf( "%d", k * n );
    for ( i = 0; i < n; i++ ) {
        for ( j = i+1; j < k + i + 1; j++ ) {
            printf( "%d %d\n", i + 1, j % n + 1 );
        }
    }
    return 0;
}