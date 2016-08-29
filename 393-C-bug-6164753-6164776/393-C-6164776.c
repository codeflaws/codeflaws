#include <stdio.h>
#include <stdlib.h>

int n;

int special(int x, int y) {
  long long xx = x, yy = y, nn = n; xx *= x; yy *= y; nn *= n;
  return xx + yy <= nn;
}

int main(int argc, char *argv[]) {
  int i, j, r = 0, s = 0;
  scanf("%d", &n);
  j = n;
  if (n == 0) r = 1;
  else if (n == 1) r = 4;
  else {
    for (i = 0; i <= j; ++i) {
      while (!special(i, j)) --j;
      if (i < j) ++r;
      if (i == j) ++s;
    }
    r = 2*r + s; r += r - 1; r += r - 2;
  }
  printf("%d\n", r);
  exit(EXIT_SUCCESS);
}
