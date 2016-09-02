#include <stdio.h>

int n , i , j , k, a[100005] ,num[100005] ,pos [100005]  , mx ;

int main(int argc, char *argv[])
{
    scanf("%d", &n ) ;

    for ( i = 0 ; i < n ;i++ ) scanf("%d", &a[i] ) ;

     for ( i = 0 ; i < n ;i++ )
     {
         num[a[i]]++ ;
         pos[i] = num[a[i]] ;

         if ( mx < a[i] ) mx = a[i] ;
     }

     for( i = 1 ; i < mx ; i++)
     {
         if( num[i] < num[i+1] )
         {
             printf("-1") ;
             return 0 ;
         }
     }

     for( i = 0 ; i < n ; i++) printf("%d ", pos[i] ) ;
 return 0 ;
 }
