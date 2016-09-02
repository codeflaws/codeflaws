#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
     if (a > b) {
	  return a;
     } else {
	  return b;
     }
}

int main(int argc, char *argv[])
{
     int n, l = 0, p = 0, m = 0, i, j, k;
     char s[100001], b[10][11];
     int c[10];

     scanf("%s", s);
     scanf("%d", &n);

     for (i = 0; i < n; i++) scanf("%s", b[i]);

     for (i = 0; i < n; i++) c[i] = strlen(b[i]);

     for (i = 0; i < strlen(s) - l; i++) {
	  for (j = 0; i + j < strlen(s); j++) {
	       int f = 0;
	       for (k = 0; k < n; k++) {
		    if (j < c[k] - 1) continue;

		    if (strncmp(&s[i + j + 1 - c[k]], b[k], c[k]) == 0) {
			 f = 1; m = c[k]; break;
		    }
	       }

	       if (f == 1) {
		    if (j > l) {
			 l = j; p = i;
		    }
		    i = max(i, i + l - m + 1);
		    break;
	       }
	  }

	  if (i + j == strlen(s)) {
	       if (j > l) {
		    l = j; p = i;
	       }
	  }
     }

     printf("%d %d\n", l, p);

     return 0;
}
