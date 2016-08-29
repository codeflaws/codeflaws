#include <stdio.h>

typedef struct {
    int x, p;
} Pair;

Pair S[100000], A[100000], B[100000];

int compare_val(Pair *a, Pair *b) {
    return a->x - b->x;
}

int compare_pos(Pair *a, Pair *b) {
    return a->p - b->p;
}

int main(int argc, char *argv[]) {
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &S[i].x);
        S[i].p = i;
    }
    qsort(S, n, sizeof(Pair), compare_val);
    for(i = 0; i < n/3; i++) {
        A[i].p = B[i].p = S[i].p;
        A[i].x = i;
        B[i].x = S[i].x - A[i].x;
    }
    for(i = n/3; i < 2*n/3; i++) {
        A[i].p = B[i].p = S[i].p;
        B[i].x = i;
        A[i].x = S[i].x - B[i].x;
    }
    for(i = 2*n/3; i < n; i++) {
        A[i].p = B[i].p = S[i].p;
        B[i].x = n - i - 1;
        A[i].x = S[i].x - B[i].x;
    }
    qsort(A, n, sizeof(Pair), compare_pos);
    qsort(B, n, sizeof(Pair), compare_pos);
    for(i = 0; i < n; i++) {
        printf("%d ", A[i].x);
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        printf("%d ", B[i].x);
    }
    printf("\n");
    return 0;
}
