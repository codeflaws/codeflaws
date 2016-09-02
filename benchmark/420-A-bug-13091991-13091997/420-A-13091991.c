#include <stdio.h>
#include <string.h>

char s[100001] ;

int i , j , k , m, n ;

int check( char p )
{
    if ( p == 'A' ) return 1 ;
    if ( p == 'H' ) return 1 ;
    if ( p == 'I' ) return 1 ;
    if ( p == 'M' ) return 1 ;
    if ( p == 'O' ) return 1 ;
    if ( p == 'T' ) return 1 ;
    if ( p == 'U' ) return 1 ;
    if ( p == 'V' ) return 1 ;
    if ( p == 'W' ) return 1 ;
    if ( p == 'X' ) return 1 ;
    if ( p == 'Y' ) return 1 ;

    else return 0 ;
}

int main(int argc, char *argv[])
{
    scanf("%s" , &s) ;

    n = strlen(s) ;




    for( i = 0 ; i <n ; i++  )
    {
        if( 0 == check(s[i]))
        {
            printf("NO" ) ;
            return 0 ;
        }
        if ( s[i] != s[n-i] )
        {
             printf("NO" ) ;
            return 0 ;
        }
    }

    printf("YES") ;
    return 0 ;
}

//A H I M O T U V W X Y
//0 1 2 3 4 5
