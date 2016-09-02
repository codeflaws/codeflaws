#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
     int n, m, k, l, p, i;
     char c[5], s[201];

     scanf("%d %d %d", &n, &k, &m);
     scanf("%*s %s", c);
     scanf("%s", s);

     if (c[0] == 'h') {
	  p = 0;
     } else {
	  p = 1;
     }

     l = strlen(s);

     for (i = 0; i < l; i++) {
	  if (s[i] == '0') {
	       if (k < m) {
		    k--;

		    if (k == 0) k = 1;
	       } else {
		    k++;

		    if (k == n + 1) k = n;
	       }

	       if (p == 0) {
		    m--;

		    if (m == 1) p = 1;
	       } else {
		    m++;

		    if (m == n) p = 0;
	       }

	       if (m == k) {
		    printf("Controller %d\n", i + 1);

		    break;
	       }
	  } else {
	       if (p == 0) {
		    m--;

		    if (m == 1) p = 1;
	       } else {
		    m++;

		    if (m == n) p = 0;
	       }

	       if ((m > 1 && p == 1) || m == n) {
		    k = 1;
	       } else {
		    k = n;
	       }
	  }
     }

     if (i == l) puts("Stowaway");

     return 0;
}
