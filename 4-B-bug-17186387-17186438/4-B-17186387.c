#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"
int main(int argc, char *argv[]) {
    int d, s, i, m[32], n[32], a = 0, b = 0, c;
    scanf("%d %d", &d, &s);
    for (i = 0; i < d; i++) {
        scanf("%d %d", &m[i], &n[i]);
        a += m[i];
        b += n[i];
    }
    if (s < a || s > b) {
        printf("NO");
    } else {
        printf("YES\n");
        c = b - s;
        for (i = 0; i < d; i++) {
            if (n[i] - m[i] <= c) {
                c -= n[i] - m[i];
                printf("%d ", m[i]);
            } else if (c > 0) {
                printf("%d ", m[i] + c);
                c = 0;
            } else {
                printf("%d ", n[i]);
            }
        }
    }
    return 0;
}
