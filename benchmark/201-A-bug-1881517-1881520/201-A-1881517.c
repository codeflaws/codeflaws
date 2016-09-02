#include <stdio.h>

int main(int argc, char *argv[]) {
        int i, t, x;

        for ( scanf ( "%d", &x ), i = 1; ; i += 2 ) {
                t = i / 2 * i + 1;
                if ( t >= x ) break;
        }
        printf ( "%d\n", 3 == x ? 5 : i );

        return 0;
}
