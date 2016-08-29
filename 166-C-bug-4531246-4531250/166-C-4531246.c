#include <stdio.h>
#include <stdlib.h>

#define N 500

void sort (int *l, int *r) {
  int *i = l, *j = r, p = l[(r - l + 1)/2], tmp;
  while (i <= j) {
    while (*i < p) ++i;
    while (p < *j) --j;
    if (i <= j) {
      tmp = *i; *i = *j; *j = tmp;
      ++i; --j;
    }
  }
  if (i < r) sort (i, r);
  if (l < j) sort (l, j);
}


int main(int argc, char *argv[]) {
  int n, x, a[2*N + 1], res = 0, i;
  scanf ("%d %d", &n, &x);
  for (i = 0; i < n; ++i) scanf ("%d", &a[i]);
  for (i = 0; i < n; ++i) printf ("%d ", a[i]); printf ("\n");
  while (sort (a, a+n-1), a[(n-1)/2] != x) { ++res; a[n++] = x; }
  printf ("%d\n", res);
  exit (EXIT_SUCCESS);
return 0;
}
