#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main(int argc, char *argv[]) {
  int m, k, d[N], s[N], i, bb[N] = {0}, res = 0, f = 0;
  scanf ("%d %d", &m, &k);
  for (i = 0; i < m; ++i) scanf ("%d", &d[i]);
  for (i = 0; i < m; ++i) scanf ("%d", &s[i]);
  bb[0] = s[0]; for (i = 1; i < m; ++i) {
    bb[i] = s[i] > bb[i - 1] ? s[i] : bb[i - 1];
  }
  for (i = 0; i < m; ++i) {
    res += d[i];
    f += s[i] - d[i];
    while (f < 0) {
      f += bb[i]; res += k;
    }
  }
  printf ("%d\n", res);
  exit (EXIT_SUCCESS);
return 0;
}
