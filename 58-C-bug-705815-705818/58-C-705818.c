#include <stdio.h>

int d[500000];

int max(int a, int b)
{
     if (a > b) {
	  return a;
     } else {
	  return b;
     }
}

int main(int argc, char *argv[])
{
     int n, m = 0, i;
     int a[100000];

     scanf("%d", &n);

     for (i = 0; i < n; i++) {
	  scanf("%d", &a[i]);

	  if (i < n / 2) {
	       d[250000 + a[0] + i - a[i]]++;
	  } else {
	       d[250000 + a[0] + n - i - 1 - a[i]]++;
	  }
     }

     for (i = 0; i < 250000 + a[0]; i++) m = max(m, d[i]);

     printf("%d\n", n - m);

     return 0;
}
