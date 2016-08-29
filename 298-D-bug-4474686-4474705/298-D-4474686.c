#include <stdio.h>
#include <stdlib.h>

#define N 10000

int intcmp (const void *u, const void *v) {
  const int a = *(int *)u, b = *(int *)v;
  return a < b ? -1 : a == b ? 0 : 1;
}

int main(int argc, char *argv[]) {
  int n, m, k, i, j, a[N], b[N] = {0}, res = 0, *bb;
  scanf ("%d %d %d", &n, &m, &k);
  for (i = 0; i < n; ++i) scanf ("%d", &a[i]);
  for (i = 0; i < m; ++i) scanf ("%d", &b[i]);
  if (m < n) m = n;
  qsort (a, n, sizeof *a, intcmp);
  qsort (b, m, sizeof *b, intcmp);
  bb = b + m - n;
  for (i = j = 0; i < n && j < m && !res; ++i, ++j) {
    if (a[i] > bb[j]) res = 1;
  }
  printf ("%s\n", res ? "YES" : "NO");
  exit (EXIT_SUCCESS);
}
