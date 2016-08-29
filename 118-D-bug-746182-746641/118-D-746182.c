#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 110
#define K 11
#define R 100000000

int f[N][N][K];
int g[N][N][K];

int main(int argc, char *argv[]) {
  int n1, n2, k1, k2, a, b, x, y;

  scanf("%d %d %d %d", &n1, &n2, &k1, &k2);
  f[0][0][k1] = g[0][0][k2] = 1;
  for (a = 0; a <= n1; a++)
    for (b = 0; b <= n2; b++) {
      for (x = 1; x <= k1 && x <= a; x++)
        f[a][b][x] += g[a - x][b][k2], f[a][b][x] %= R;
      for (y = 1; y <= k2 && y <= b; y++)
        g[a][b][y] += f[a][b - y][k1], g[a][b][y] %= R;
      for (x = 2; x <= k1; x++)
        f[a][b][x] += f[a][b][x - 1], f[a][b][x] %= R;
      for (y = 2; y <= k2; y++)
        g[a][b][y] += g[a][b][y - 1], g[a][b][y] %= R;
    }
  printf("%d\n", f[n1][n2][k1] + g[n1][n2][k2]);

  return 0;
}
