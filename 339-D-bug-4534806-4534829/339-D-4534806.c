#include <stdio.h>

int tree[1<<18];
int main(int argc, char *argv[]) {
    int n, m, p, b, i, j, l;

    scanf("%d %d", &n, &m);
    for (i = 0; i < (1<<n); i++) scanf("%d", tree+(1<<n)+i);
    for (j = n, p = 0; j; j--, p = !p) {
        for (i = (1<<j)-1; i >= (1<<(j-1)); i--) {
            if (!p) tree[i] = tree[2*i] | tree[2*i+1];
            else tree[i] = tree[2*i] ^ tree[2*i+1];
        }
    }
    for (i = 0; i < m; i++) {
        scanf("%d %d", &p, &b);
        tree[(1<<n)+p-1] = b;
        for (i = ((1<<n)+p-1)/2, l = 0; i; i /= 2, l = !l) {
            if (!l) tree[i] = tree[2*i] | tree[2*i+1];
            else tree[i] = tree[2*i] ^ tree[2*i+1];
        }
        printf("%d\n", tree[1]);
    }

    return 0;
}