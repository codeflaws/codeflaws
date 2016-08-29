#include <stdio.h>

int main(int argc, char *argv[])
{
     int n, num = 0, count = 0, i, j, k;
     int a[10][4], b[10], c[10];
     int d[10000] = {0};

     scanf("%d", &n);

     for (i = 0; i < n; i++) {
	  for (j = 0; j < 4; j++) scanf("%1d", &a[i][j]);

	  scanf("%d %d", &b[i], &c[i]);
     }

     for (i = 0; i < 10000; i++) {
	  int x = i;
	  int p[10] = {0};

	  for (j = 0; j < 4; j++) {
	       p[x % 10]++;

	       x /= 10;
	  }

	  for (j = 0; j < 10; j++) {
	       if (p[j] > 1) d[i] = 1;
	  }
     }

     for (i = 0; i < n; i++) {
	  for (j = 0; j < 10000; j++) {
	       if (d[j] == 0) {
		    int p[10] = {0};
		    int x = j, y = 0, z = 0;

		    for (k = 0; k < 4; k++) p[a[i][k]]++;

		    for (k = 0; k < 4; k++) {
			 p[x % 10]++;

			 if (x % 10 == a[i][3 - k]) y++;

			 x /= 10;
		    }

		    for (k = 0; k < 10; k++) {
			 if (p[k] == 2) z++;
		    }

		    if (y != b[i] || z - y != c[i]) d[j] = 1;
	       }
	  }
     }

     for (i = 0; i < 10000; i++) {
	  if (d[i] == 0) {
	       num = i;
	       count++;
	  }
     }

     if (count > 1) {
	  puts("Need more data");
     } else if (count == 1) {
	  printf("%d\n", num);
     } else {
	  puts("Incorrect data");
     }

     return 0;
}
