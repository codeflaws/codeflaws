#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double rad(double radius, int i, int n) {
  if (i <= n / 2)
    return radius * (1 - 2 * i / 5000.0);
  else
    return radius * (1 - (1.98 * (n - i) + 1.1) / 5000.0);
}

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  if (n == 3 || n == 4) {
    printf("No solution");
    return 0;
  }

  int i;
  double t = 3.14159265358979323 * 2 / n;
  double denominator = sin(t);
  double radius = sqrt((950.0 * 950.0) / (2 - 2 * cos(t)));
  for (i = 0; i < n; i++) {
    double r1 = rad(radius, i, n);
    double r2;
    if (i < n - 1)
      r2 = rad(radius, i + 1, n);
    else
      r2 = rad(radius, 0, n);

    double t1 = t * i;
    double t2 = t * (i + 1);
    
    double x = (r1 * sin(t2) - r2 * sin(t1)) / denominator;
    double y = (r2 * cos(t1) - r1 * cos(t2)) / denominator;
    printf("%.3f %.3f", x, y);
    if (i < n - 1)
      printf("\n");
  }
  
  return 0;
}
