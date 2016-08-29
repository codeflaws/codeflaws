#include <stdio.h>

int n , min1, min2, min3, mx1, mx2, mx3 , dif1, dif2, dif3, x;

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    scanf("%d %d", &min1, &mx1);
    scanf("%d %d", &min2, &mx2);
    scanf("%d %d", &min3, &mx3);

    dif1 = mx1 - min1;
    dif2 = mx2- min2;

    x = n - min1 - min2 -min3;

    if( x == 0)
    {
        printf("%d %d %d", min1, min2, min3);
    }
    else
    {
        if ( x <= dif1 )
        {
            printf("%d %d %d", min1+x, min2, min3);
        }
        else
        {
            x = x - dif1;
            if( x <= dif2 ) printf("%d %d %d", mx1, min2+x, min3);
            else
            {
                       x = x - dif2;
                      if( x <= dif3 ) printf("%d %d %d", mx1, mx2, min3+x);
                      else
                      {
                          printf("%d %d %d", mx1, mx2, mx3);
                      }
            }
        }
    }

 return 0;
 }
