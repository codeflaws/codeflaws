#include <stdio.h>

int s[100010];

int max (int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main(int argc, char *argv[]) {
    int n, cnt = 1, i, ans = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    for (i = 0; i < n-1; i++) {
        if (s[i+1] >= s[i]) {
            cnt++;
        }
        else {
            cnt = 1;
        }
        ans = max(ans , cnt);
    }
    printf("%d\n", ans);
    return 0;
}
