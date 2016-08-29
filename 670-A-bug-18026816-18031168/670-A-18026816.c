#include <stdio.h>

int main(int argc, char *argv[]) {

    int n, min = 0, max = 0, i;

    scanf("%d", &n);

    for( i=1; i<=n; i++) {
        if(i>5)
            if(i%5==1 || i%5==2) min++;
        if( i%7==1 || i%7==2) max++;
    }
    printf("%d %d\n", min, max);

    return 0;
}
