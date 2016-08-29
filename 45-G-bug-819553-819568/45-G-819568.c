#include <stdio.h>

char a[20000000];

int main(int argc, char *argv[])
{
     int n, sum, x = 0, i, j;
     int b[6000] = {0};

     scanf("%d", &n);

     sum = n * (n + 1) / 2;

     a[0] = a[1] = 1;

     for (i = 4; i <= sum; i += 2) a[i] = 1;

     for (i = 3; i * i <= sum; i += 2) {
	  if (a[i] == 0) {
	       for (j = i * 2; j <= sum; j += i) a[j] = 1;
	  }
     }

     if (a[sum] == 0) {
	  for (i = 0; i < n; i++) {
	       if (i > 0) putchar(' ');

	       putchar('1');
	  }
	  puts("");
     } else if (a[sum - 2] == 0) {
	  b[1] = 1;

	  for (i = 0; i < n; i++) {
	       if (i > 0) putchar(' ');

	       printf("%d", b[i] + 1);
	  }
	  puts("");
     } else if (sum % 2 == 0) {
	  for (i = 3; i <= sum / 2; i += 2) {
	       if (a[i] == 0 && a[sum - i] == 0) break;
	  }

	  for (j = 0; j < n; j++) {
	       b[j] = 1;

	       x += j + 1;

	       if (x >= i) break;
	  }

	  if (x > i) {
	       b[x - i - 1] = 0;
	  }

	  for (i = 0; i < n; i++) {
	       if (i > 0) putchar(' ');

	       printf("%d", b[i] + 1);
	  }
	  puts("");
     } else {
	  sum -= 3;

	  b[0] = b[1] = 1;

	  for (i = 3; i <= sum / 2; i += 2) {
	       if (a[i] == 0 && a[sum - i] == 0) break;
	  }

	  for (j = 2; j < n; j++) {
	       b[j] = 2;

	       x += j + 1;

	       if (x >= i) break;
	  }

	  if (x > i) {
	       if (x - i > 2) {
		    b[x - i - 1] = 0;
	       } else {
		    b[j] = 0;
		    b[j - x + i + 3] = 2;
		    b[2] = 0;
	       }
	  }

	  for (i = 0; i < n; i++) {
	       if (i > 0) putchar(' ');

	       printf("%d", b[i] + 1);
	  }
	  puts("");
     }

     return 0;
}
