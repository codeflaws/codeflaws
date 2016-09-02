#include <stdio.h>

long long a,b,p,s,t ;

long long res( long long x, long long y )
{
    if ( y == 0) return 0 ;
    else
    {


        return x/y + res( y, x%y ) ;

    }
}

int main(int argc, char *argv[])
{

    scanf("%lld %lld", &a, &b) ;

   s = res(a, b) ;

   printf("%d" , s) ;
 return 0 ;
 }
