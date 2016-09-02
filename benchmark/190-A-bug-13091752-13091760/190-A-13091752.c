#include <stdio.h>

int n , m, mn, mx , p, q, r ;

int main(int argc, char *argv[])
{

    scanf("%d %d" , &n, &m) ;

    if ( n == 0 )
    {
        printf("Impossible") ;
        return 0 ;
    }

    if ( m > n )
    {
        mn = m ;

    }
    else
    {
        mn = n ;

    }
    if ( m != 0 ) m-- ;

    mx = m + n ;
    printf("%d %d", mn, mx) ;
 return 0 ;
 }
