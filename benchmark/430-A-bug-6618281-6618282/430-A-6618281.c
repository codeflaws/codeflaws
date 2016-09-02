#include <stdio.h>

#define MAXN 101

int main(int argc, char *argv[]) {
    int n, m;
    scanf("%d %d\n", &n, &m);
    int pts[MAXN];
    int ans[MAXN];
    int i, temp;
    for (i = 0; i < MAXN; i++) {
        pts[i] = 0;
    }
    for (i = 1; i <= n; i++) {
        scanf("%d", &temp);
        pts[temp] = i;
    }
    int mod = 0;
    for (i = 1; i < MAXN; i++) {
        if(pts[i] != 0) {
            ans[pts[i]] = mod%2;
            mod++;
        }
    }
    for (i = 1; i < n; i++) {
        printf("%d ", ans[i]);
    }
    printf("%d \n", ans[n]);
return 0;
}
