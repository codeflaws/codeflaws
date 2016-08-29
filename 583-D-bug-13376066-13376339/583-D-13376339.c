#include <stdio.h>
#include <stdlib.h>

#define MAX 333

int min(int x, int y) {
  return x < y ? x :  y;
}

int a[MAX];
int dp[MAX];
int n;

void update() {
  int i, j;
  for (i = 0; i < n; i++) {
    int ma = 0;
    for (j = 0; j <= a[i]; j++) {
      if (dp[j] > ma) ma = dp[j];
    }
    if (ma + 1 > dp[a[i]]) dp[a[i]] = ma + 1;
  }
}
           
int main(int argc, char *argv[]) {          
  int t, i;
  scanf("%d %d", &n, &t);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }                                   
  int time1 = min(MAX, t);
  int time3 = min(MAX, t - time1);
  int time2 = t - time1 - time3;
  for (i = 0; i < time1; i++) {
    update();
  }
  int ma = 0;
  if (time2 != 0) {
  for (i = 0; i < MAX; i++) {
    int cnt = 0;
    int j;
    for (j = 0; j < n; j++) if (a[j] == i) cnt++;
    if (dp[i] > ma) ma = dp[i];
    dp[i] = ma + cnt * time2;                         
  }
  }
  for (i = 0; i < time3; i++) {
    update();
  }
  int res = 0;
  for (i = 0; i < MAX; i++) if (dp[i] > res) res = dp[i];
  printf("%d\n", res);
  return 0;
}
