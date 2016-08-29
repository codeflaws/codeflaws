#include <stdio.h>
#include <stdlib.h>

typedef struct {
     int x;
     int y;
} stamp;

stamp s[200000];
int n;

int cmp(const void *a, const void *b)
{
     return ((stamp *)a)->x - ((stamp *)b)->x;
}

int binary_search(int x)
{
     int l = -1, r = 2 * n, m = (l + r) / 2;

     while (r - l > 1) {
	  if (s[m].x >= x) {
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
     int p, q, i;

     scanf("%d", &n);

     for (i = 0; i < n; i++) {
	  int x, y;

	  scanf("%d %d", &x, &y);

	  s[i * 2].x = s[i * 2 + 1].y = x;
	  s[i * 2].y = s[i * 2 + 1].x = y;
     }

     qsort(s, 2 * n, sizeof(stamp), cmp);

     for (i = 0; i < n; i++) {
	  if (s[i * 2].x != s[i * 2 + 1].x) break;
     }

     p = s[i * 2].x;
     q = -1;

     for (i = 0; i < n + 1; i++) {
	  int c = binary_search(p);

	  if (i > 0) putchar(' ');

	  printf("%d", p);

	  if (s[c].y == q) c++;

	  q = p;
	  p = s[c].y;
     }

     puts("");

     return 0;
}
