#include <stdio.h>

int n , m , a[51][51] , i , j , k ,c ;

int main(int argc, char *argv[])
{
    scanf("%d %d", &n, &m ) ;

    for( i = 0 ; i < n ; i ++)
    {
        for( j = 0 ; j < m ; j++)
        {
            scanf("%d", &a[i][j] ) ;
        }
    }


    for( i = 0 ; i < n ; i ++ )
    {
        if ( a[i][0] == 1)
        {
            c = 1 ;
            break ;
        }
    }
    if ( c == 1)
    {
        printf("2") ;
        return 0 ;
    }


        for( i = 0 ; i < n ; i ++ )
    {
        if ( a[i][m-1] == 1)
        {
            c = 1 ;
            break ;
        }
    }
       if ( c == 1)
    {
        printf("2") ;
        return 0 ;
    }


        for( i = 0 ; i < m ; i ++ )
    {
        if ( a[0][i] == 1)
        {
            c = 1 ;
            break ;
        }
    }
     if ( c == 1)
    {
        printf("2") ;
        return 0 ;
    }


        for( i = 0 ; i < n ; i ++ )
    {
        if ( a[n-1][i] == 1)
        {
            c = 1 ;
            break ;
        }
    }
    if ( c == 1)
    {
        printf("2") ;
        return 0 ;
    }

    printf("4" ) ;






  return 0;
  }
