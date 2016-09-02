#include <stdio.h>
#define NMAX 200010
#define DEBUG

int A[NMAX], B[NMAX];

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int check(int n, int A[], int B[]) {
    int ia = 0, ib = 0;

    if (!B[ib])
        ib = (ib + 1) % n;

    while (A[ia] != B[ib])
        ia = (ia + 1) % n;

    int i;
    for(i = 1; i < n; i++){
        ia = (ia + 1) % n;
        ib = (ib + 1) % n;

        if (!A[ia])
            ia = (ia + 1) % n;
        if (!B[ib])
            ib = (ib + 1) % n;

        if (A[ia] != B[ib])
            return 0;
    }

    return 1;
}

int main(int argc, char *argv[]) {
    #ifdef DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif //DEBUG

    int n;
    scanf("%d", &n);

    int ai0, bi0;

    int i;
    for(i = 0; i < n; i++) {
        scanf("%d", A + i);
        if (!A[i])
            ai0 = i;
    }

    for(i = 0; i < n; i++) {
        scanf("%d", B + i);
        if (!B[i])
            bi0 = i;
    }

    while (ai0 != bi0) {
        swap(&A[ai0], &A[(ai0 + 1) % n]);
        ai0 = (ai0 + 1) % n;
    }

    if (check(n, A, B))
        printf("YES");
    else
        printf("NO");

    return 0;
}
