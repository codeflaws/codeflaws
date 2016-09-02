#include <stdio.h>

int main(int argc, char *argv[])
{
     int n, m, h, sum = 0, i;
     int s[1000];
     double d = 1;

     scanf("%d %d %d", &n, &m, &h);

     for (i = 0; i < m; i++) {
	  scanf("%d", &s[i]);

	  sum += s[i];
     }

     if (sum < n) {
	  puts("-1.0\n");

	  return 0;
     }

     if (sum - s[h - 1] < n - 1) {
	  puts("1.0\n");

	  return 0;
     }

     for (i = 0; i < n - 1; i++) {
	  d *= (double)(sum - s[h - 1] - i) / (sum - i - 1);
     }

     printf("%.9lf\n", 1 - d);

     return 0;
}
