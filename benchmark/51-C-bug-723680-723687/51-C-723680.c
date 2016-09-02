#include <stdio.h>
#include <stdlib.h>

int n;
int x[200000];

int cmp(const void *a, const void *b)
{
     return *((int *)a) - *((int *)b);
}

int binary_search(double p)
{
     int l = -1, r = n, m = (l + r) / 2;

     while (r - l > 1) {
	  if (x[m] > p + 1e-5) {
	       r = m;
	       m = (l + r) / 2;
	  } else {
	       l = m;
	       m = (l + r) / 2;
	  }
     }

     return r;
}

int main(int argc, char *argv[])
{
     int a, b, i;
     double l, r, m;

     scanf("%d", &n);

     for (i = 0; i < n; i++) scanf("%d", &x[i]);

     qsort(x, n, sizeof(int), cmp);

     l = 0, r = x[n - 1] - x[0] / 2; m = (l + r) / 2;

     while (r - l > 1e-6) {
	  int p = binary_search(x[0] + m * 2);

	  if (p == n) {
	       r = m;
	       m = (l + r) / 2;
	  } else {
	       p = binary_search(x[p] + m * 2);

	       if (p == n || x[p] + 2 * m >= x[n - 1]) {
		    r = m;
		    m = (l + r) / 2;
	       } else {
		    l = m;
		    m = (l + r) / 2;
	       }
	  }
     }

     m = (int)(m * 2 + 1e-5) / 2.0;

     a = binary_search(x[0] + m * 2);
     if (a == n) {
	  b = n - 1;
     } else {
	  b = binary_search(x[a] + m * 2);

	  if (b == n) b--;
     }

     printf("%.6lf\n", m);
     printf("%.6lf %.6lf %.6lf\n", x[0] + m, x[a] + m, x[b] + m);

     return 0;
}
