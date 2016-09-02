#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double a, d, div, mod, l, x, y;
  int i, n, idiv;
  scanf("%lf %lf %d", &a, &d, &n);
  for (i = 1; i <= n; ++i) {
    l = i*d;
    div = l/a; mod = fmod(l, a);
    idiv = div; idiv %= 4;
    if (idiv == 0) { x = mod; y = 0; }
    if (idiv == 1) { x = a; y = mod; }
    if (idiv == 2) { x = a - mod; y = a; }
    if (idiv == 3) { x = 0; y = a - mod; }
    printf("%.10f %.10f\n", x, y);
  }
  exit(EXIT_SUCCESS);
return 0;
}
