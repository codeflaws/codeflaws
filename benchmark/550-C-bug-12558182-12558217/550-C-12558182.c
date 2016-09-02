#include <stdio.h>
#include <string.h>

char s[101] ;

int n,i,j,k, a[101] ,p,q,r ;

int main(int argc, char *argv[])
{
    scanf("%s" , &s) ;

    n = strlen(s) ;

    for( i = 0 ; i < n ; i++)
    {
        a[i] = s[i] - '0' ;
    }
    for( i = n-1 ; i > -1; i--)
    {
        if( a[i] %2 != 1)
        {
            for( j = i -1 ; j > -1 ; j--)
            {

                for( k = j -1 ; k > -1 ; k--)
                {
                    p =a[i]  + 10*a[ j]  + 100*a[k] ;

                    if( p % 8 == 0)
                    {
                        printf("YES\n" ) ;
                        for( r = 0 ; r < k ; r++)
                        {
                            printf("%d", a[i] ) ;
                        }
                        printf("%d%d%d",a[k] , a[j] , a[i]  ) ;
                        return 0 ;
                    }
                }
                q = a[j] * 10 + a[i] ;

                if( q% 8 == 0)
                {
                    printf("YES\n%d" , q) ;
                    return 0 ;
                }
            }
            if( a[i] % 8 == 0)
            {
                printf("YES\n%d" , a[i] ) ;
                return 0 ;
            }

        }
    }
    printf("NO" ) ;
    return 0 ;
}
