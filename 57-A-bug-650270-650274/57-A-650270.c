#include <stdio.h>
#include <stdlib.h>

int maximum(int a, int b)
{
     if (a > b) {
	  return a;
     } else {
	  return b;
     }
}

int minimum(int a, int b)
{
     if (a < b) {
	  return a;
     } else {
	  return b;
     }
}

int main(int argc, char *argv[])
{
     int n, x1, y1, x2, y2, a, b, c;

     scanf("%d %d %d %d %d", &n, &x1, &y1, &x2, &y2);

     if (y1 == 0) {
	  a = x1;
     } else if (x1 == n) {
	  a = n + y1;
     } else if (y1 == n) {
	  a = 3 * n - x1;
     } else {
	  a = 4 * n - y1;
     }

     if (y2 == 0) {
	  b = x2;
     } else if (x2 == n) {
	  b = n + y2;
     } else if (y2 == n) {
	  b = 3 * n - x2;
     } else {
	  b = 4 * n - y2;
     }

     c = minimum(a, b) + 400;

     printf("%d\n", minimum(abs(a - b), c - maximum(a, b)));

     return 0;
}
