#include <stdio.h>

int f(k,n,i) {
    if( k&1 ) {
        if( i == 1 || i == 3*k) {
            return 1;
        }
        if( 2 <= i && i <= k+1 ) {
            return i-1;
        }
        if( k+2 <= i && i <= 2*k) {
            return k - (i - (k+2));
        }
        if( 2*k+1 <= i && i <= 3*k-1) {
            return i - 2*k + 1;
        }
        return 1;
    }else {
        if( 1 <= i && i <= k ) {
            return i;
        }
        if( k+1 <= i && i <= 2*k ) {
            return k - (i - k+1);
        }
        if( 2*k+1 <= i && i <= 3*k ) {
            return i - 2*k;
        }
        return 1;
    }
}
int main(int argc, char *argv[])
{
    int k,n,i;
    scanf("%d%d",&n,&k);
    if( n < 3*k ) {
        printf("-1\n");
        return 0;
    }
    for( i = 1; i <= n; i++ ) {
        printf("%d ",f(k,n,i));
    }
    printf("\n");
    return 0;
}
