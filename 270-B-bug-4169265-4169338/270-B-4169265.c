#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n, i, u, v = 0, res = 0;
  scanf ("%d ", &n);
  for (i = 0; i < n; ++i) {
    scanf ("%d", &u);
    if (u < v) {
      ++res;
    }
    v = u;
  }
  printf ("%d\n", res);
  exit (EXIT_SUCCESS);
return 0;
}
