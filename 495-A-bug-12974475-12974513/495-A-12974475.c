#include <stdio.h>

int n , a, b ,x,y  ;

int check( int p)
{
     // printf("p = %d\n" ,p ) ;
    if ( p == 0 ) return 1 ;
    if ( p ==1 ) return 5 ;
    if ( p == 2 ) return 1 ;
    if ( p == 3 ) return 2 ;
    if ( p == 4 ) return 2 ;
    if ( p == 5 ) return 3 ;
    if ( p == 6) return 1 ;
    if ( p == 7  ) return 4 ;
    if ( p == 8 ) return 0 ;
    if ( p == 9  ) return 1 ;
}

int main(int argc, char *argv[])
{
    scanf("%d" , &n) ;

    a = n %10 ;
    b = n/ 10 ;
// printf("a = %d, b = %d\n" , a,b ) ;

    x = 1 + check(a) ;
    y = 1 + check(b) ;

      // printf("x = %d, y = %d\n" , x, y ) ;

    printf("%d" , x*y ) ;
    return 0;
}
