#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int s = 0, n, k, i, a, m = 10001;
  scanf ("%d %d", &n, &k);
  for (i = 0; i < n; ++i) {
    scanf ("%d", &a);
    if (abs (a) < m) m = abs (a);
    if (k > 0 && a < 0) {
      a = -a;
      --k;
    }
    s += a;
  }
  if (k > 0) s -= 2*m;
  printf ("%d\n", s);
  exit (EXIT_SUCCESS);
return 0;
}
