#include <stdio.h>

int main(int argc, char *argv[]) {
        int i, t, x;

        for ( scanf ( "%d", &x ), i = 1; ; i += 2 ) {
                t = ( ( i + 1 ) / 2 ) * i - ( i / 2 );
                if ( t >= x ) break;
        }
        printf ( "%d\n", i );

        return 0;
}
