#include <stdio.h>

int main(int argc, char *argv[])
{
     int n, a, b, sum = 1, max = 1, i;

     scanf("%d %d %d", &n, &a, &b);

     if (n - a == 1 && a > 0) {
	  puts("-1");

	  return 0;
     }

     putchar('1');

     if (b == 0) {
	  printf(" 1");

	  n--;
     }

     for (i = 0; i < b; i++) {
	  printf(" %d", sum + 1);

	  max = sum + 1;
	  sum += sum + 1;
     }

     for (i = 0; i < a; i++) {
	  printf(" %d", max + i + 1);
     }

     for (i = 0; i < n - a - b - 1; i++) {
	  printf(" 1");
     }

     puts("");

     return 0;
}
