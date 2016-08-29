#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define MAX 1010
#define MOD 1000000007
#define min(a,b) ((a)<(b) ? (a):(b))
#define clr(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("lol.txt", "r", stdin)
#define valid(i, j) ((i) >= 0 && (i) < n && (j) >= 0 && (j) < n)

char str[MAX][MAX];
int n, ar[4][MAX][MAX], row[4][MAX][MAX], col[4][MAX][MAX], LD[4][MAX][MAX], RD[4][MAX][MAX];

long long expo(int a, int b){
    long long res = 1;

    while (b){
        if (b & 1) res = (long long)res * a % MOD;
        a = (long long)a * a % MOD;
        b >>= 1;
    }
    return res;
}

void Generate(){
    int i, j, k;
    for (k = 0; k < 4; k++){
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                row[k][i][j] = ar[k][i][j];
                if (j) row[k][i][j] += row[k][i][j - 1];
            }
        }

        for (j = 0; j < n; j++){
            for (i = 0; i < n; i++){
                col[k][i][j] = ar[k][i][j];
                if (i) col[k][i][j] += col[k][i - 1][j];
            }
        }
    }

    for (k = 0; k < 4; k++){
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                LD[k][i][j] = ar[k][i][j];
                if (i && (j + 1) < n) LD[k][i][j] += LD[k][i - 1][j + 1];
            }
        }
    }

    for (k = 0; k < 4; k++){
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                RD[k][i][j] = ar[k][i][j];
                if (i && j) RD[k][i][j] += RD[k][i - 1][j - 1];
            }
        }
    }
}

bool check(int i, int j, int len){
    int u, v, x;
    u = j - len + 1, v = j + len - 1, x = row[0][i][v];
    if (u) x -= row[0][i][u - 1];
    if (x) return false;

    u = i - len + 1, v = i + len - 1, x = col[0][v][j];
    if (u) x -= col[0][u - 1][j];
    if (x) return false;
    return true;
}

bool check2(int i, int j, int len){
    int x, k = 0;
    x = LD[k][i + len - 1][j - len + 1];
    if (valid(i - len, j + len)) x -= LD[k][i - len][j + len];
    if (x) return false;

    x = RD[k][i + len - 1][j + len - 1];
    if (valid(i - len, j - len)) x -= RD[k][i - len][j - len];
    if (x) return false;
    return true;
}

int c1, c2;

void go(int i, int j, int len){
    c1 = 0, c2 = 0;
    int k, u, v, x;
    for (k = 2; k <= 3; k++){
        u = j - len + 1, v = j + len - 1, x = row[k][i][v];
        if (u) x -= row[k][i][u - 1];
        u = i - len + 1, v = i + len - 1, x += col[k][v][j];
        if (u) x -= col[k][u - 1][j];
        if (ar[k][i][j] == 1) x--;

        if (k == 2) c1 = x;
        else c2 = x;
    }
}

void go2(int i, int j, int len){
    c1 = 0, c2 = 0;
    int k, u, v, x;
    for (k = 2; k <= 3; k++){
        x = LD[k][i + len - 1][j - len + 1];
        if (valid(i - len, j + len)) x -= LD[k][i - len][j + len];
        x += RD[k][i + len - 1][j + len - 1];
        if (valid(i - len, j - len)) x -= RD[k][i - len][j - len];
        if (ar[k][i][j] == 1) x--;

        if (k == 2) c1 = x;
        else c2 = x;
    }
}

int main(int argc, char *argv[]){
    int i, j, k, l, x, u, v, low, high, mid, idx;
    double vv, res = 0.0, l2 = log10(2.0), l3 = log10(3.0);

    while (scanf("%d", &n) != EOF){
        clr(ar);
        clr(row), clr(col), clr(LD), clr(RD);
        for (i = 0; i < n; i++) scanf("%s", str[i]);

        int ones = 0;
        for (k = 0; k < 4; k++){
            for (i = 0; i < n; i++){
                for (j = 0; j < n; j++){
                    if ((str[i][j] - 48) == k) ar[k][i][j] = 1;
                    if (str[i][j] == 49) ones++;
                }
            }
        }

        Generate();
        u = 0, v = 0, res = 0.0;
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                if (str[i][j] != 48){
                    k = min(j + 1, n - j), l = min(i + 1, n - i);
                    low = 1, high = min(k, l);

                    while ((low + 1) < high){
                        mid = (low + high) >> 1;
                        if (check(i, j, mid)) low = mid;
                        else high = mid;
                    }

                    idx = low;
                    if (check(i, j, high)) idx = high;
                    go(i, j, idx);
                    vv = l2 * c1 + l3 * c2;
                    if (vv > res) res = vv, u = c1, v = c2;



                    int f1, f2;
                    f1 = min(i + 1, n - j), f2 = min(n - i, j + 1);
                    k = min(f1, f2);

                    f1 = min(i + 1, j + 1), f2 = min(n - i, n - j);
                    l = min(f1, f2);

                    low = 1, high = min(k, l);
                    while ((low + 1) < high){
                        mid = (low + high) >> 1;
                        if (check2(i, j, mid)) low = mid;
                        else high = mid;
                    }

                    idx = low;
                    if (check2(i, j, high)) idx = high;
                    go2(i, j, idx);
                    vv = l2 * c1 + l3 * c2;
                    if (vv > res) res = vv, u = c1, v = c2;
                }
            }
        }

        long long huh = 0;
        if (u || v) huh = (expo(2, u) * expo(3, v)) % MOD;
        else if (ones) huh = 1;
        printf("%lld\n", huh);
    }
    return 0;
}
