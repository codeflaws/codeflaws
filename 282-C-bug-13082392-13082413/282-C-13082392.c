#include <stdio.h>
#include <string.h>

char a[1000001] , b[1000001];

int i , j , k , cz , p , q;

int main(int argc, char *argv[])
{

    scanf("%s" , &a );
      scanf("%s" , &b );



      p = strlen(a);

      q = strlen(b);

      if ( p != q ) printf("NO" );

      else
      {
          for( i = 0 ; i < p ; i++)
          {
              if( a[i] == '1' )
              {
                  k = 1;
                  break;
              }
          }

          for( i = 0 ; i < q ; i++)
          {
              if( b[i] == '1' )
              {
                  j = 1;
                  break;
              }
          }

          if ( k == 1 && j == 1) printf("YES");

          else printf("NO");
      }


  return 0;
  }
