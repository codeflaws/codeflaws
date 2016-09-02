#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

short n, m;
short selectarr[5];
short taken;
char password[40];
short k;
int rest;

struct
{
    char attempt[40];
    short response;
} pass[10];


bool binarySearch( short v )
{
    short low, mid, high;

    low = 0;
    high = k - 1;

    while( low <= high )
    {
        mid = low + ( high - low ) / 2;

        if( selectarr[mid] == v )
        {
            return 1;
        }
        else if( selectarr[mid] < v )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return 0;
}

void check()
{
    short i, j;
    short res;
    bool exist;

    exist = true;

    for( i = 1; i < m; i++ )
    {
        res = 0;
        for( j = 0; j < n; j++ )
        {
            if( password[j] == pass[i].attempt[j] )
            {
                res++;
            }
        }

        if( res != pass[i].response )
        {
            exist = false;
            break;
        }
    }

    if( exist )
    {
        rest++;
    }
}

void generate()
{
    short i;

    for( i = 0; i < n; i++ )
    {
        if( binarySearch( i ) )
        {
            password[i] = pass[0].attempt[i];
        }
        else
        {
            password[i] = 97 - (int) ( pass[0].attempt[i] );
        }
    }

    check();
}

void combination( short idx )
{
    short i;

    if( taken == k )
    {
        generate();
        return;
    }

    for( i = idx; i < n; i++ )
    {
        selectarr[taken++] = i;
        combination( idx + 1 );
        taken--;
    }
}

int main(int argc, char *argv[])
{
    short i, j;

    scanf( "%hi %hi", &n, &m );

    for( i = 0; i < m; i++ )
    {
        getchar();

        for( j = 0; j < n; j++ )
        {
            scanf( "%c", &pass[i].attempt[j] );
        }

        scanf( "%hi", &pass[i].response );
    }

    k  = pass[0].response;
    taken = 0;
    rest = 0;

    combination( 0 );

    printf( "%d\n", rest );

    return 0;
}
