#include <stdio.h>

int main(int argc, char *argv[])
{
     int n, max = 0, sum, i;
     int a[100000], sum1[100002] = {0}, sum2[100002] = {0};

     scanf("%d", &n);

     for (i = 0; i < n; i++) {
	  scanf("%d", &a[i]);
     }

     for (i = 1; i < n + 1; i++) sum1[i] = sum1[i - 1] + a[i - 1];
     for (i = n; i > 0; i--) sum2[i] = sum2[i + 1] + a[i - 1];

     sum = sum1[n];

     for (i = 0; i <= n; i++) {
	  if (max > sum1[i]) max = sum1[i];
	  if (sum1[i] - 2 * max + sum2[i + 1] > sum) {
	       sum = sum1[i] - 2 * max - sum2[i + 1];
	  }
     }

     printf("%d\n", sum);

     return 0;
}
