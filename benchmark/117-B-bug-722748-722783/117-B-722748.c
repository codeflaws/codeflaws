#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    long i, j;
    long a, b, mod;
    scanf( "%ld %ld %ld", &a, &b, &mod );

    if( b >= mod - 1 ){
        printf( "\n%d", 2 );
        return 0;
    }

    for( i=0; i<=a; i++ ){

        long long temp = i*1000000000LL;

        long remainder = temp % mod;
        if( remainder != 0 )
            remainder = mod - remainder;

        if( remainder > b ){
            printf( "\n%d %09ld", 1, i );
            return 0;
        }

    }

    printf( "\n%d", 2 );
    return 0;

}

