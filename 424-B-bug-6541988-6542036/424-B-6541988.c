// http://codeforces.com/problemset/problem/424/B

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int compare( const void * a, const void * b )
{
    return ( *(int*)a - *(int*)b );
}

int main(int argc, char *argv[])
{
    int s, sum;
    short n, i, idx;
    short x, y;
    int elemSize;  // for sorting
    bool flag;
    double radius;

    scanf( "%hi %d", &n, &s );

    int towns[n][2];

    for( i = 0; i < n; i++ )
    {
        scanf( "%hi %hi %d", &x, &y, &towns[i][1] );
        towns[i][0] = ( x * x ) + ( y * y );
    }

    elemSize = sizeof( towns[0] );
    qsort( towns, n, elemSize, compare );

    idx =0;
    i = 0;
    flag = 0;
    while( i  < n && flag == 0 )
    {
        sum = s;

        while( towns[i][0] == towns[idx][0] && i < n )
        {
            sum += towns[i][1];

            if( sum >= 1000000 )
            {
                flag = 1;
                break;
            }

            i++;
        }

        idx = i;
    }

    if( flag == 1 )
    {
        radius = sqrt( towns[idx][0] * 1.0 );
        printf( "%.7lf\n", radius );
    }
    else
    {
        printf( "-1\n" );
    }

    return 0;
}
