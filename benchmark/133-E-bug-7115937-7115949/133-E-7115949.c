#include <stdio.h>
#include <string.h>

enum {
    L, R, N = 101, CMD = 55
};

int left[N][CMD][2];
int right[N][CMD][2];
char cmd[N];
int len;

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }
void updMax(int *a, int b) {
    *a = max(*a, b);
}

int abs(int a) { return a < 0 ? -a: a; }

void updMin(int *a, int b) {
    *a = min(*a, b);
}
int dx[2] = {-1, 1};

int main(int argc, char *argv[]) {
    int n;
    scanf("%s %d", cmd, &n);
    len = strlen(cmd);
    int i, j, k;
    for(i = 0; i < N; i++)
        for(j = 0; j < CMD; j++)
            for(k = 0; k < 2; k++) {
                left[i][j][k] = 100500;
                right[i][j][k] = -100500;
            }
    left[0][0][0] = left[0][0][1] = right[0][0][0] = right[0][0][1] = 0;
    for(i = 0; i < len; i++) {
        for(j = 0; j <= n; j++)
            for(k = 0; k < 2; k++) {
                if(left[i][j][k] != 100500) {
                    if(cmd[i] == 'F') {
                        updMax(&right[i + 1][j][k], left[i][j][k] + dx[k]);
                        updMin(&left[i + 1][j][k], left[i][j][k] + dx[k]);

                        updMax(&right[i + 1][j + 1][1 - k], left[i][j][k]);
                        updMin(&left[i + 1][j + 1][1 - k], left[i][j][k]);
                    } else {
                        updMax(&right[i + 1][j][1 - k], left[i][j][k]);
                        updMin(&left[i + 1][j][1 - k], left[i][j][k]);

                        updMax(&right[i + 1][j + 1][k], left[i][j][k] + dx[k]);
                        updMin(&left[i + 1][j + 1][k], left[i][j][k] + dx[k]);
                    }
                }
                if(right[i][j][k] != -100500) {
                    if(cmd[i] == 'F') {
                        updMax(&right[i + 1][j][k], right[i][j][k] + dx[k]);
                        updMin(&left[i + 1][j][k], right[i][j][k] + dx[k]);

                        updMax(&right[i + 1][j + 1][1 - k], right[i][j][k]);
                        updMin(&left[i + 1][j + 1][1 - k], right[i][j][k]);
                    } else {
                        updMax(&right[i + 1][j][1 - k], right[i][j][k]);
                        updMin(&left[i + 1][j][1 - k], right[i][j][k]);

                        updMax(&right[i + 1][j + 1][k], right[i][j][k] + dx[k]);
                        updMin(&left[i + 1][j + 1][k], right[i][j][k] + dx[k]);
                    }
                }
            }
    }
    int ans = 0;
    for(i = n & 1; i <= n; i += 2) {
        for(k = 0; k < 2; k++) {
            if(left[len][i][k] != 100500)
                updMax(&ans, abs(left[len][i][k]));
            if(right[len][i][k] != -100500)
                updMax(&ans, abs(right[len][i][k]));
        }
    }
    printf("%d\n", ans);
    return 0;
}
