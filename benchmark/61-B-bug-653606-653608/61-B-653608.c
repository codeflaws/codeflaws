#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
     char s[3][101];
     char c[601];
     char a[6][301] = {};
     int n, i, j, k;

     for (i = 0; i < 3; i++) scanf("%s", s[i]);

     strcat(a[0], s[0]); strcat(a[0], s[1]); strcat(a[0], s[2]);
     strcat(a[1], s[0]); strcat(a[1], s[2]); strcat(a[1], s[1]);
     strcat(a[2], s[1]); strcat(a[2], s[0]); strcat(a[2], s[2]);
     strcat(a[3], s[1]); strcat(a[3], s[2]); strcat(a[3], s[0]);
     strcat(a[4], s[2]); strcat(a[4], s[0]); strcat(a[4], s[1]);
     strcat(a[5], s[2]); strcat(a[5], s[1]); strcat(a[5], s[0]);

     scanf("%d", &n);

     for (i = 0; i < n; i++) {
	  scanf("%s", c);

	  for (j = 0; j < 6; j++) {
	       int p = 0;

	       for (k = 0; k < strlen(a[j]); k++) {
		    if (a[j][k] == '-' || a[j][k] == ';' || a[j][k] == '_') {
			 continue;
		    }

		    while (c[p] == '-' || c[p] == ';' || c[p] == '_') p++;

		    if ((a[j][k] | 32) != (c[p++] | 32)) break;
	       }

	       if (k == strlen(a[j])) {
		    while (c[p] == '-' || c[p] == ';' || c[p] == '_') p++;

		    if (c[p] == '\0') {
			 puts("ACC");

			 break;
		    }
	       }
	  }

	  if (j == 6) puts("WA");
     }

     return 0;
}
