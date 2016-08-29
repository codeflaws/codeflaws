#include <stdio.h>
#include <math.h>

void swap (int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char *argv[]) {
    int n, x;
    int a, b;
    int min = 100000, max = 0;
    int i;

    scanf ("%d %d", &n, &x);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);

        if (a > b) swap(&a, &b);
        

        if (a > max) max = a;
        if (b < min) min = b;
    }
    
    if (min < max) printf("-1\n");
    else  {
        int d  = 0;

        if (max <= x && x<= min) printf("%d\n", d);
        else {
            d = abs(x - max);
            if (d > abs(x - min)) d = abs(x - max);

            printf("%d\n", d);
        }
    }
    
    return 0;
}