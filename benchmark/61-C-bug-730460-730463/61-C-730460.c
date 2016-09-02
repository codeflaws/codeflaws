#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     int a, p = 0, i;
     char b[5], c[1001], s[1000];
     long long x = 0;

     scanf("%d %s", &a, b);
     scanf("%s", c);

     for (i = 0; i < strlen(c); i++) {
	  x *= a;

	  if (c[i] >= 'A' && c[i] <= 'Z') {
	       x += c[i] - 'A' + 10;
	  } else {
	       x += c[i] - '0';
	  }
     }

     if (b[0] == 'R') {
	  for (i = 0; i < x / 1000; i++) putchar('M');

	  x %= 1000;

	  if (x / 100 < 4) {
	       for (i = 0; i < x / 100; i++) putchar('C');
	  } else if (x / 100 == 4) {
	       printf("CD");
	  } else if (x / 100 < 9) {
	       putchar('D');
	       for (i = 5; i < x / 100; i++) putchar('C');
	  } else {
	       printf("CM");
	  }

	  x %= 100;

	  if (x / 10 < 4) {
	       for (i = 0; i < x / 10; i++) putchar('X');
	  } else if (x / 10 == 4) {
	       printf("XL");
	  } else if (x / 10 < 9) {
	       putchar('L');
	       for (i = 5; i < x / 10; i++) putchar('X');
	  } else {
	       printf("XC");
	  }

	  x %= 10;

	  if (x < 4) {
	       for (i = 0; i < x; i++) putchar('I');
	  } else if (x == 4) {
	       printf("IV");
	  } else if (x < 9) {
	       putchar('V');
	       for (i = 5; i < x; i++) putchar('I');
	  } else {
	       printf("IX");
	  }

	  puts("");
     } else {
	  int d = atoi(b);

	  while (x) {
	       int y = x % d;

	       if (y >= 10) {
		    s[p++] = 'A' + y - 10;
	       } else {
		    s[p++] = '0' + y;
	       }

	       x /= d;
	  }

	  for (i = p - 1; i >= 0; i--) putchar(s[i]);
	  puts("");
     }

     return 0;
}
