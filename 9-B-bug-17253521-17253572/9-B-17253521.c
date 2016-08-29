#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"
int main(int argc, char *argv[]) {
    int n, i, w = 0;
    double b, s, a[102], x, y, z = 100000000;
    
    scanf("%d %lf %lf", &n, &b, &s);
    for (i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }
    scanf("%lf %lf", &x, &y);
    for (i = 1; i < n; i++) {
        //printf("%lf ", a[i] / b + sqrt((a[i] - x) * (a[i] - x) + y * y) / s);
        if (a[i] / b + sqrt((a[i] - x) * (a[i] - x) + y * y) / s < z) {
            z = a[i] / b + sqrt((a[i] - x) * (a[i] - x) + y * y) / s;
            w = i + 1;
        }
    }
    printf("%d", w);
    return 0;
}
