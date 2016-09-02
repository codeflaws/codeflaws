#include <stdio.h>
#include <stdlib.h>

typedef struct {
     int a;
     int b;
     int c;
} employee;

int cmp(const void *a, const void *b)
{
     return ((employee *)a)->c - ((employee *)b)->c;
}

int main(int argc, char *argv[])
{
     int n, m, sum = 0, f = 0, i;
     int q[1000], a[1000] = {0};
     employee e[10000];

     scanf("%d", &n);

     for (i = 0; i < n; i++) scanf("%d", &q[i]);

     scanf("%d", &m);

     for (i = 0; i < m; i++) scanf("%d %d %d", &e[i].a, &e[i].b, &e[i].c);

     if (n == 1) {
	  puts("0");

	  return 0;
     }

     qsort(e, m, sizeof(employee), cmp);

     for (i = 0; i < m; i++) {
	  if (q[e[i].a - 1] <= q[e[i].b - 1]) continue;

	  if (a[e[i].b - 1] != 1) {
	       if (a[e[i].a - 1] == 0) {
		    a[e[i].a - 1] = 2;
		    a[e[i].b - 1] = 1;

		    sum += e[i].c;
	       } else {
		    a[e[i].b - 1] = 1;

		    sum += e[i].c;
	       }
	  }
     }

     for (i = 0; i < n; i++) {
	  if (a[i] == 0) {
	       puts("-1");

	       return 0;
	  } else if (a[i] == 2) {
	       f++;
	  }
     }

     if (f > 1) {
	  puts("-1");
     } else {
	  printf("%d\n", sum);
     }

     return 0;
}
