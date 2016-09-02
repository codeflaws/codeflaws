#include <stdio.h>

int main(int argc, char *argv[])
{
     long long a, b, x, y;

     scanf("%lld %lld", &a, &b);

     x = (a - b) / 2;
     y = a - x;

     if (x >= 0 && x ^ y == b) {
	  printf("%lld %lld\n", x, y);
     } else {
	  puts("-1");
     }

     return 0;
}
