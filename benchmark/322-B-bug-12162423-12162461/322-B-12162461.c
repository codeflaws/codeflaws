#include <stdio.h>

int r , g, b , s , min, a[4] ,i ;

int main(int argc, char *argv[])
{
  scanf("%d %d %d"  , &r, &g, &b)  ;



  a[0] = r ;
  a[1] = g ;
  a[2] = b ;
  min =1000000001 ;
  for( i = 0 ; i < 3 ; i++)
  {
     if ( min > a[i] )
     {
      min = a[i] ;
    }
}
r = r - min ;
g = g - min ;
b = b - min ;
//printf("%d %d %d %d\n", r , g, b , min) ;
s =  r/3 + g/3 + b/3 + min ;

if ( r%3 + g%3 + b%3 == 4 && min != 0 )
{
    s++ ;
}
printf("%d", s) ;
return 0;
}
