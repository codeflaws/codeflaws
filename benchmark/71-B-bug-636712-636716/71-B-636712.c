#include <stdio.h>

int main(int argc, char *argv[])
{
     int n, k, t, sum = 0, i, j;

     scanf("%d %d %d", &n, &k, &t);

     for (i = 0; i < n; i++) {
	  if (i > 0) putchar(' ');

	  if ((sum + k) * 100 <= n * k * t) {
	       sum += k;

	       printf("%d", k);
	  } else if ((sum + 1) * 100 > n * k * t) {
	       printf("0");
	  } else {
	       for (j = 0; j < k; j++) {
		    if ((sum + j) * 100 > n * k * t) {
			 sum += j - 1;

			 printf("%d", j - 1);

			 break;
		    }
	       }
	  }
     }
     puts("");

     return 0;
}
