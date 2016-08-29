#include <stdio.h>

int min(int a, int b)
{
     if (a < b) {
	  return a;
     } else {
	  return b;
     }
}

int main(int argc, char *argv[])
{
     int n, m, k, f = 0, i;

     scanf("%d %d %d", &n, &m, &k);

     for (i = 0; i < k; i++) {
	  int x, y;

	  scanf("%d %d", &x, &y);

	  if (min(min(x, n - x + 1), min(y, m - y + 1)) < 5) f = 1;
     }

     if (f == 1) {
	  puts("YES");
     } else {
	  puts("NO");
     }

     return 0;
}
