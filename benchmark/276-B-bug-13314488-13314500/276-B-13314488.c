#include <stdio.h>
#include <string.h>

char s[1005] ;

int a[30] , b , n,i, k ;

int main(int argc, char *argv[])
{

    scanf("%s", s) ;

    n = strlen(s ) ;

    for ( i = 0 ; i < n ; i++)
    {
        k = s[i] - 'a' ;

        a[k]++ ;
    }
    k = 0 ;

    for( i = 0 ; i < 26 ;i++) k+= a[i] %2 ;

    if( k%2 ) printf("First");
    else printf("Second") ;


 return 0 ;
 }
