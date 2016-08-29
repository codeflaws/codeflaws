#include <stdio.h>



int t , i , j , k , p, q ,r[101] ,   b[1000005] , n, mx  ;

char s[101] ;

int main(int argc, char *argv[])
{

      scanf("%d" , &n) ;
         getchar() ;

      for ( i = 0 ; i < n ; i++)
      {
          scanf("%c %d" , &s[i] , &r[i] ) ;

          getchar() ;

          //printf("%c %d" , s[i] , r[i] ) ;
      }

      for ( i = 0 ; i < n ; i++)
      {
          if ( s[i] == '+' )
          {
              k++ ;
              b[r[i] ] = 1  ;

              if ( mx < k ) mx = k ;
          }

          else
          {
              if ( b[r[i] ] == 0 )
              {
                  mx++ ;

                  b[r[i] ] = 0 ;
              }
              else
              {
                  b[r[i] ] = 0 ;
                  k-- ;

              }
          }
      }

      printf("%d" , mx) ;


return 0 ;
}
