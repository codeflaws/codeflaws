#include <stdio.h>

int main(int argc, char *argv[])
{
     int n, v, i;
     int a[20], b[20];
     double l = 0, r = 100, u = 50, res = 0;

     scanf("%d %d", &n, &v);

     for (i = 0; i < n; i++) scanf("%d", &a[i]);
     for (i = 0; i < n; i++) scanf("%d", &b[i]);

     while (r - l > 0.000001) {
	  double sum = 0;

	  for (i = 0; i < n; i++) {
	       if (a[i] * u > b[i]) break;

	       sum += a[i] * u;
	  }

	  if (i < n || sum > v) {
	       r = u;
	       u = (l + r) / 2;
	  } else {
	       l = u;
	       u = (l + r) / 2;
	  }
     }

     for (i = 0; i < n; i++) res += a[i] * u;

     printf("%lf\n", res);

     return 0;
}
