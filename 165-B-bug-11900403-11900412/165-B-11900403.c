#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int k =0    ;
    long long n =0  , first = 0 , mid = 0 , last=0 , x= 0 , sum = 0  , answer =0 , red = 0;
    scanf("%I64d %d" , &n , &k);
    first = 0 ;
    last = n ;
    mid = 1 ;
    if (n / k ==0 )
        answer = 1 ;
    while (last > first )
    {
        sum  = 0 ;
        red = 1 ;
        x = 1 ;
        mid =  first +(last - first)/ 2 ;
        while (x> 0)
        {
            x = mid/red;
           sum += x;
           red *= k ;

        }

        if (sum >= n ){


                    answer = mid ;
                    last = mid ;


        }


            else
              first = mid +1;
    }
    printf("%I64d", answer);


    return 0;
}
