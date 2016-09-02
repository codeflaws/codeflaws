#include <stdio.h>
#include <stdlib.h>

typedef struct {
     int c;
     int i;
} item;

int cmp(const void *a, const void *b)
{
     return ((item *)a)->c - ((item *)b)->c;
}

int d[1000][1000];

int main(int argc, char *argv[])
{
     int n, k, p = 0, q = 0, i, j;
     double sum = 0;
     item a[1000], b[1000];
     int c[1000] = {0};

     scanf("%d %d", &n, &k);

     for (i = 0; i < n; i++) {
	  int x, y;

	  scanf("%d %d", &x, &y);

	  if (y == 1) {
	       a[p].c = x;
	       a[p++].i = i + 1;
	  } else {
	       b[q].c = x;
	       b[q++].i = i + 1;
	  }

	  sum += x;
     }

     qsort(a, p, sizeof(item), cmp);
     qsort(b, q, sizeof(item), cmp);

     for (i = 0; i < p && i < k; i++) {
	  d[i][c[i]++] = a[p - i - 1].i;

	  if (i < k - 1) sum -= a[p - i - 1].c / 2.0;
     }

     for (; i < p; i++) {
	  d[k - 1][c[k - 1]++] = a[p - i - 1].i;
     }

     for (i = 0; i < q; i++) {
	  if (i < k && c[k - i - 1] == 0) {
	       d[k - i - 1][c[k - i - 1]++] = b[i].i;
	  } else {
	       d[k - 1][c[k - 1]++] = b[i].i;
	  }
     }

     if (p >= k) {
	  int m = a[0].c;

	  if (q > 0 && b[0].c < m) m = b[0].c;

	  sum -= m / 2.0;
     }

     printf("%.1lf\n", sum);

     for (i = 0; i < k; i++) {
	  printf("%d", c[i]);

	  for (j = 0; j < c[i]; j++) printf(" %d", d[i][j]);

	  puts("");
     }

     return 0;
}
