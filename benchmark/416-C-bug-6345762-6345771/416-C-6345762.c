#include <stdlib.h>
#include <stdio.h>

struct record {
    int c;
    int p;
    int i;
};

struct table {
    int r;
    int i;
};

struct ans {
    int a;
    int b;
};

struct record D[1001];
struct table  R[1001];
struct ans    A[1001];

int dcompare(const void *a, const void *b) {
    int diff = ((struct record*)a)->c - ((struct record*)b)->c;
    if (diff == 0) {
        return ((struct record*)a)->p - ((struct record*)b)->p;
    } else {
        return diff;
    }
}

int rcompare(const void *a, const void *b) {
    return ((struct table*)a)->r - ((struct table*)b)->r;
}

int main(int argc, char *argv[]) {
    int n, i, j, k;
    int cnt = 0, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d%d", &D[i].c, &D[i].p);
        D[i].i = i;
    }
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &R[i].r);
        R[i].i = i;
    }
    qsort(D, n, sizeof(struct record), &dcompare);
    qsort(R, k, sizeof(struct table),  &rcompare);
    for (i = 0; i < k; i++) {
        printf("%d\n", R[i].r);
        int M = 0, m = -1;
        for (j = 0; D[j].c <= R[i].r && j < n; j++) {
            if (M < D[j].p) {
                M = D[j].p;
                m = j;
            }
        }
        if (m != -1) {
            A[cnt].a = D[m].i + 1;
            A[cnt].b = R[i].i + 1;
            sum += D[m].p;
            cnt++;
            D[m].p = 0;
        }
    }
    printf("%d %d\n", cnt, sum);
    for (i = 0; i < cnt; i++) {
        printf("%d %d\n", A[i].a, A[i].b);
    }
    return 0;
}
