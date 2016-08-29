#include <stdio.h>
#include <stdlib.h>

#define REP(i, n) for((i) = 0; (i) < (n); i++)

int i, n, negative = 0, zero = 0, v[110];

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int v[], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(v[j] < v[i]) swap(&v[i], &v[j]);
        }
    }
}

int main(int argc, char *argv[]) {
    scanf("%d", &n);
    REP(i, n) {
        scanf("%d", &v[i]);
        if(v[i] < 0) negative += 1;
        if(v[i] == 0) zero += 1;
    }
    sort(v, n);
    if(zero == n) {
        puts("0");
    } else if(negative % 2 == 0) {
        REP(i, n) if(v[i] != 0) {
            printf("%d ", v[i]);
        }
        printf("\n");
    } else if(negative == n) {
        if(n == 1) {
            printf("%d", v[0]);
        } else {
            REP(i, n) if(i != n - 1) {
                printf("%d ", v[i]);
            }
        }
    } else if(zero + negative == n) {
        if(negative % 2 == 0) {
            puts("0");
        } else {
            REP(i, n) {
                if(v[i] != 0) {
                    if(negative <= 1) continue;
                    printf("%d ", v[i]);
                    negative -= 1;
                }
            }
        }
    } else {
        REP(i, n) if(v[i] != 0) {
            if(v[i] < 0) {
                if(negative <= 1) continue;
                negative -= 1;
            }
            printf("%d ", v[i]);
        }
    }
    return 0;
}
