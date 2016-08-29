#include <stdio.h>

long long min(long long a, long long b)
{
     if (a < b) {
	  return a;
     } else {
	  return b;
     }
}

int main(int argc, char *argv[])
{
     int n, m, k, p = 100000, i;
     int a[10000];

     scanf("%d %d %d", &n, &m, &k);

     for (i = 0; i < n; i++) {
	  scanf("%d", &a[i]);

	  if (i % 2 == 0 && a[i] < p) p = a[i];
     }

     if (n % 2 == 0 || (n + 1) / 2 > m) {
	  puts("0");

	  return 0;
     }

     m /= (n + 1) / 2;

     printf("%I64d\n", min((long long)m * k, p));

     return 0;
}
