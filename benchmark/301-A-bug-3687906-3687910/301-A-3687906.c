#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INF (1 << 30)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int a[210];
int dp[210][210];

void recur(int c0, int c1, int n, int m) {
  int i, j;
  if (dp[c0][c1] != -1) {
    return;
  }
  dp[c0][c1] = 1;
  for (i = MIN(n, c0); i >= 0; i --) {
    if (n - i > m - c0) {
      break;
    }
    for (j = MIN(c1, n - i); j >= 0; j --) {
      if (m - c0 - c1 >= n - i - j) {
    recur(c0 - i + j, c1 - j + i, n, m);
      } else {
    break;
      }
    }
  }
}

void solve(int n) {
  int cnt_p, cnt_m, i, j, num, sum, m;
  cnt_p = cnt_m = 0;
  m = (n << 1) - 1;
  for (i = 0; i < m; i ++) {
    if (a[i] > 0) {
      cnt_p ++;
    } else if (a[i] < 0) {
      cnt_m ++;
    }
  }
  memset(dp, 255, sizeof(dp));
  recur(cnt_p, cnt_m, n, m);
  num = -1;
  for (i = m; i >= 0; i --) {
    if (dp[i][cnt_p + cnt_m - i] == 1) {
      num = i;
      break;
    }
  }
  printf("%d\n", num);
  sum = 0;
  dp[0][0] = 0;
  for (i = 1; i <= m; i ++) {
    if (a[i - 1] > 0) {
      sum -= a[i - 1];
    } else {
      sum += a[i - 1];
    }
    dp[i][0] = sum;
  }
  for (i = 1; i <= num; i ++) {
    dp[0][i] = -INF;
  }
  for (i = 1; i <= m; i ++) {
    for (j = 1; j <= num; j ++) {
      if (a[i - 1] < 0) {
    dp[i][j] = MAX(dp[i - 1][j - 1] - a[i - 1], dp[i - 1][j] + a[i - 1]);
      } else if (a[i - 1] > 0) {
        dp[i][j] = MAX(dp[i - 1][j - 1] + a[i - 1], dp[i - 1][j] - a[i - 1]);
      } else {
    dp[i][j] = dp[i - 1][j];
      }
    }
  }
  printf("%d\n", dp[m][num]);
}

int main(int argc, char *argv[]) {
  int n, i;
  while (scanf("%d", &n) == 1) {
    for (i = 0; i < (n << 1) - 1; i ++) {
      scanf("%d", &a[i]);
    }
    solve(n);
  }
  return 0;
}