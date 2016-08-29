#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define li long int
#define lli long long int
#define szf sizeof
#define givemem(t, n) (t*)malloc(sizeof(t) * (n))
#define sstr(x) scanf("%s", str);
#define si(x) scanf("%d", &x)
#define pi(x) printf("%d", x)
#define sli(x) scanf("%ld", &x)
#define pli(x) printf("%ld", x)
#define slli(x) scanf("%l64d", &x)
#define plli(x) printf("%l64d", x)
#define sc(x) scanf("%c", &x)
#define pc(x) printf("%c", x)
#define newl() printf("\n")
#define fl(i, val, n) for(i = (val);i < (n);i++)
#define fln(i, val, n) for(i = (val);i > (n);i--)
int max(int a, int b) {
    return a > b ? a : b;
}
int dp[30001][500];
int main(int argc, char *argv[]) {
    int n, d, ind, p[30001], i, j, ans = 0, os, a, b, c, s;
    si(n);
    si(d);
    memset(p, 0, szf(p));
    memset(dp, -1, szf(dp));
    fl(i, 0, n) {
        si(ind);
        p[ind]++;
    }
    os = (d - 245) < 0 ? 0 : d - 245;
    s = d - 245;
    if(s < 1)
    	s = 1;
    dp[d][d - os] = p[d];
    fl(i, d, 30001) {
        fl(j, s, d + 246) {
        	if(dp[i][j - os] < 0)
        		continue;
        	a = b = c = 0;
            if(((i + j - 1) < 30001) && (j > 1)) {
                dp[i + j - 1][j - 1 - os] = max(dp[i + j - 1][j - 1 - os], dp[i][j - os] + p[i + j - 1]);
                a = dp[i + j - 1][j - 1 - os];
            }
            if((i + j) < 30001) {
                dp[i + j][j - os] = max(dp[i + j][j - os], dp[i][j - os] + p[i + j]);
                b = dp[i + j][j - os];
            }
            if((i + j + 1) < 30001) {
                dp[i + j + 1][j + 1 - os] = max(dp[i + j + 1][j + 1 - os], dp[i][j - os] + p[i + j + 1]);
                c = dp[i + j + 1][j + 1 - os];
            }
            ans = max(max(ans, a), max(b, c));
            //printf("i = %d j = %d ans = %d\n", i, j, ans);
        }
    }
    pi(ans);
    return 0;
}
