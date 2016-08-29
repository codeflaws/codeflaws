#include <stdio.h>

int main(int argc, char *argv[])
{
     int m, i, j, k;
     int a[5][5] = {0};

     scanf("%d", &m);

     for (i = 0; i < m; i++) {
	  int x, y;

	  scanf("%d %d", &x, &y);

	  a[x - 1][y - 1]++;
	  a[y - 1][x - 1]++;
     }

     for (i = 0; i < 5; i++) {
	  for (j = i + 1; j < 5; i++) {
	       for (k = j + 1; k < 5; k++) {
		    if (a[i][j] == 1 && a[j][k] == 1 && a[k][i] == 1) {
			 puts("WIN");

			 return 0;
		    }
		    if (a[i][j] == 0 && a[j][k] == 0 && a[k][i] == 0) {
			 puts("WIN");

			 return 0;
		    }
	       }
	  }
     }

     puts("FAIL");

     return 0;
}
