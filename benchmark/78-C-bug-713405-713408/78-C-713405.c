#include <stdio.h>

int main(int argc, char *argv[])
{
     int n, m, k, i;

     scanf("%d %d %d", &n, &m, &k);

     if (n % 2 == 0) {
	  puts("Marsel");
     } else {
	  for (i = 2; i * i <= m; i++) {
	       if (m % i == 0) {
		    if (m / i >= k) break;
	       }
	  }

	  if (i * i <= m || k == 1) {
	       puts("Timur");
	  } else {
	       puts("Marsel");
	  }
     }

     return 0;
}
