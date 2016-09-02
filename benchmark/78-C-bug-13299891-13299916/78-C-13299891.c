#include <stdio.h>
#include <math.h>

int n , k , m , x, y, p ,q ,r, d;



int main(int argc, char *argv[])
{
    scanf("%d %d %d", &n, &m, &k);

    if( n%2 == 0 ) printf("Marsel");
    else if ( k == 1 ) printf("Timur");

    else
    {
        x = sqrt( m ) + 1;




        d = 2;

       while( d != x && m%d != 0 ) d++;

       if( m%d == 0 && m/d >= k && m != d ) printf("Timur");
       else printf("Marsel");




    }

  return 0;
  }
