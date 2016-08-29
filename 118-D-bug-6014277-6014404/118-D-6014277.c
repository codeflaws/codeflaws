#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MOD   (100000000)
#define MAX_N (100)
#define MAX_K (10)

int ks[2];
int memo[2][MAX_K+1][MAX_N+1][MAX_N+1];

int f(int c, int r, int n1, int n2) {
  int acc=0;

  if ( !(n1 + n2) )
    return 1;
  if ( memo[c][r][n1][n2] >= 0 )
    return memo[c][r][n1][n2];
  if ( (c ? n2 : n1) && r < ks[c] )
    acc += f(c, r+1, (c ? n1 : n1-1), (c ? n2-1 : n2));
  if ( c ? n1 : n2 )
    acc += f(!c, 1, (c ? n1-1 : n1), (c ? n2 : n2-1));
  return memo[c][r][n1][n2] = acc % MOD;
}

int main(int argc, char *argv[]) {
  int n1, n2, ans;
  int sz = 2*(MAX_K+1)*(MAX_N+1)*(MAX_N+1);

  memset(memo, -1, sz * sizeof(int));
  scanf("%d %d %d %d", &n1, &n2, ks, ks+1);
  ans = f(0, 1, n1-1, n2) + f(1, 1, n1, n2-1);
  printf("%d\n", ans);
  return EXIT_SUCCESS;
}
