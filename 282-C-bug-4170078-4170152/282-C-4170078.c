#include <stdio.h>
#include <stdlib.h>

int f (int *l) {
  int c, ret = 0;
  while (c = getchar (), c != '\n') {
    ret |= c == '1';
    ++*l;
  }
  return ret;
}

int main(int argc, char *argv[]) {
  int lx, ly, p = f (&lx), q = f (&ly);
  printf ("%s\n", lx != ly || lx == 1 && p != q || !p && q ? "NO" : "YES");
  exit (EXIT_SUCCESS);
}
