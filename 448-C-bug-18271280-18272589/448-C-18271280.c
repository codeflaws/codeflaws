#include <stdio.h>
#include <stdlib.h>

#define MAX_H (1000000000)
#define MAX_N (5000)

int min(int x, int y) { return x < y ? x : y; }

int solve(int * xs, int x, int y, int offset) {
  int i,j,mn,acc;

  for ( i=x, mn=MAX_H; i < y; ++i )
    mn = min(mn, xs[i]);
  for ( i=x, acc=0; i < y; i=j ) {
    for ( ; i < y && xs[i] <= mn; ++i );
    for ( j=i+1; j < y && xs[j] > mn; ++j );
    if ( i < y ) acc += solve(xs, i, j, mn);
  }
  return acc + min(mn - offset, y - x);
}

int main(int argc, char *argv[]) {
  int xs[MAX_N];
  int i,n;

  scanf("%d", &n);
  for ( i=0; i < n; ++i )
    scanf("%d", xs+i);
  printf("%d\n", solve(xs, 0, n, 0));
  return EXIT_SUCCESS;
}
