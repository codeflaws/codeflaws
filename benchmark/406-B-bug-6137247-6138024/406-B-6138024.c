#include <stdio.h>

#define Nmax 1000001
int a[Nmax];

int main(int argc, char *argv[])
{
    int n, i, scn, count = 0;

    scanf( "%d", &n );
    for ( i = 0; i < n; i++ ) {
        scanf( "%d", &scn );
        a[scn] = 1;
        if ( a[Nmax-scn] ) {
            count++;
        }
    }
    printf( "%d\n", n );
    for ( i = 1; i < Nmax; i++ ) {
        if ( a[i] == 1 && a[Nmax-i] == 0 ) {
            printf( "%d ", Nmax-i );
        } else if ( a[i] == 0 && a[Nmax-i] == 0 && count > 0 ) {
            count--;
            printf( "%d %d ", i, Nmax-i );
        }
    }
    return 0;
}