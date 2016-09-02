#include <stdio.h>

double min(double a, double b)
{
     if (a < b) {
	  return a;
     } else {
	  return b;
     }
}

double max(double a, double b)
{
     if (a > b) {
	  return a;
     } else {
	  return b;
     }
}

int main(int argc, char *argv[])
{
     int n, i;
     int a[1000];
     double m1 = 10, m2 = 1e9;

     scanf("%d", &n);

     for (i = 0; i < n; i++) scanf("%d", &a[i]);

     for (i = 0; i < n; i++) {
	  m1 = max(m1, (double)a[i] * 10 / (i + 1));
	  m2 = min(m2, (double)(a[i] + 1) * 10 / (i + 1) - 1e-6);
     }

     if ((int)(m1 * (n + 1)) / 10 == (int)(m2 * (n + 1)) / 10) {
	  puts("unique");

	  printf("%d\n", (int)(m1 * (n + 1)) / 10);
     } else {
	  puts("not unique");
     }

     return 0;
}
