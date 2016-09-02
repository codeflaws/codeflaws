#include <stdio.h>

int r,c,n,m ,i;
char s[101][101] ;

int main(int argc, char *argv[])
{

    scanf("%d %d" , &n, &m) ;

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%s" , &s[i] )  ;
    }


    for( r =  0 ; r < n ; r ++ )
    {

        for ( c = 1 ; c < m; c++)
        {
            if( s[r][c] != s[r] [c-1] )
            {
                printf("NO" )  ;
                return 0;
            }
        }
    }

        for( r = 1 ; r < n ; r++)
        {
            if( s[r-1][c] ==  s[r][c] )
            {
                printf("NO" )  ;
                return 0;
            }
        }


    printf("YES") ;

    return 0 ;
}
