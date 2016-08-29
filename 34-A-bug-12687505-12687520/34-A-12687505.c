#include <stdio.h>

int n, a[101] , i,k, d, s, f , min ;

int main(int argc, char *argv[])
{
    scanf("%d", &n) ;

    for( i = 0 ; i < n ; i ++)
    {
        scanf("%d" , &a[i] ) ;
    }
    a[n] = a[0] ;
    s= 1 ;
    f = 2 ;
    min = 10000 ;

    for( i = 0 ; i < n ; i++)
    {
        d = a[i] - a[i+ 1] ;
        if ( d < 0 ) d = -d ;

        if ( d < min )
        {
            min = d ;
            s = i+1 ;
            f = i+2 ;
        }




    }
    printf("%d %d", s, f%n) ;
 return 0 ;
 }
