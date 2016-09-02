#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)
#define AV(a, b, c) ((MIN(a,c) < b && b < MAX(a,c)) ? b : ((MIN(b,c) < a && a < MAX(b,c)) ? a : c))

int main(int argc, char *argv[]) {
    int n, a[100000], i, min, max;

    scanf ("%d", &n);

    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    min = max = 1;

    for (i = 0; i < n; i++) {
        if ((a[i] > a[min - 1] && a[i] < a[max - 1]) || (((a[i] > a[max-1] && min > max) || (a[i] < a[min-1] && max > min)) && max != min))
            break;
        if (a[i] > a[max-1]) max = i+1;
        if (a[i] < a[min-1]) min = i+1;
        //if (max - min > )
        //printf("%d %d\n", min, max);
    }

    if (max != min && i < n)
        printf("3\n%d %d %d\n", MIN(min, MIN(max, i+1)), AV(min, max, i+1), MAX(max, MAX(max, i+1)));
    else
        printf("0\n");
    return 0;   
}