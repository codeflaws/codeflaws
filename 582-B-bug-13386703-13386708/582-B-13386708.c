#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 102
#define LIM 303
#define clr(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("lol.txt", "r", stdin)

bool visited[MAX][MAX][LIM][2];
int n, t, counter[1010], ar[MAX], dp[MAX][MAX][LIM][2];

int F(int i, int l, int r, int flag){
    if (i > n){
        if (r == t || r == LIM){
            if (!flag) return (counter[ar[l]] * (t - r));
            else return 0;
        }
        else return F(0, l, r + 1, flag);
    }
    if (visited[i][l][r][flag]) return dp[i][l][r][flag];

    int x, res = F(i + 1, l, r, flag);
    if (ar[i] >= ar[l]){
        x = 1 + F(i + 1, i, r, flag);
        if (x > res) res = x;
    }
    if (!flag && t > LIM){
        x = F(i, l, r, 1) + (counter[ ar[l] ] * (t - LIM));
        if (x > res) res = x;
    }

    visited[i][l][r][flag] = true;
    return (dp[i][l][r][flag] = res);
}

int main(int argc, char *argv[]){
    int i, j, k;

    while (scanf("%d %d", &n, &t) != EOF){
        if (!n) break;

        ar[0] = 0;
        clr(counter);
        for (i = 1; i <= n; i++){
            scanf("%d", &ar[i]);
            counter[ar[i]]++;
        }

        clr(visited);
        int res = F(1, 0, 1, 0);
        printf("%d\n", res);
    }
    return 0;
}
