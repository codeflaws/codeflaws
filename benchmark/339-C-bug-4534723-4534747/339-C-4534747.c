#include <stdio.h>

int m; int found = 0;
char w[20]; int seen[11][11], next[11][11];
void dfs(int diff, int last, int depth) {
    int i;
    if (depth == m || seen[diff][last]) {
        found = 1; return;
    }
    seen[diff][last] = 1;
    for (i = 1; i <= 10; i++) {
        if (w[i-1] == '0') continue;
        if (i == last || i <= diff) continue;
        //printf("%d %d %d %c %d\n", diff, last, i, w[i-1], w[i-1] == '0');
        next[diff][last] = i;
        dfs(i - diff, i, depth+1);
        if (found) return;
    }
    seen[diff][last] = 0;
}
int main(int argc, char *argv[]) {
    int i, d, l, t;

    scanf("%s %d", w, &m);
    dfs(0, 0, 0);
    if (!found) printf("NO\n");
    else {
        printf("YES\n");
        for (i = d = l = 0; i < m; i++) {
            printf("%d%c", next[d][l], i == m-1 ? '\n' : ' ');
            t = next[d][l] - d;
            l = next[d][l]; d = t;
        }
    }

    return 0;
}