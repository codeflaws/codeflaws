#include <stdio.h>

int a[101] , r[101] , i, j , k, p,q,s, n , cp, cq ;

int main(int argc, char *argv[])
{
    scanf("%d", &n) ;

    for( i = 0 ; i < n ; i++)
    {
        scanf("%d", &a[i] ) ;
        r[a[i]] ++ ;
    }

    for( i = 1 ; i < 101 ; i++ )
    {
        p = r[i] / 4 ;
        q = r[i] % 4 ;
        q = q / 2 ;
        cp += p ;
        cq += q ;

      //  printf("for %d : %d, , p = %d, q = %d, cp = %d, cq =%d\n" , i, r[i] , p,q,cp,cq ) ;


    }

    s = cp + cq / 2 ;
    printf("%d" , s) ;
 return 0 ;
 }
