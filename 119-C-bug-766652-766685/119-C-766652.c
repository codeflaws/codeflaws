#include <stdio.h>
#include <stdlib.h>

typedef struct {
     long long a;
     long long b;
     int c;
     int i;
} subjects;

long long dp[50][51][101][2];

int cmp(const void *a, const void *b)
{
     if (((subjects *)a)->c != ((subjects *)b)->c) {
	  return ((subjects *)a)->c - ((subjects *)b)->c;
     }
}

int main(int argc, char *argv[])
{
     int n, m, k, i, j, l, p, q;
     long long x = 0;
     subjects s[50];
     int a[50];
     long long b[50];

     scanf("%d %d %d", &n, &m, &k);

     for (i = 0; i < m; i++) {
	  scanf("%lld %lld %d", &s[i].a, &s[i].b, &s[i].c);

	  s[i].i = i;
     }

     qsort(s, m, sizeof(subjects), cmp);

     for (i = 0; i < m; i++) {
	  for (j = 0; j <= n; j++) {
	       for (l = 0; l <= 100; l++) {
		    dp[i][j][l][0] = -1;
	       }
	  }
     }

     for (i = 0; i < m; i++) {
	  for (j = 0; j <= s[i].b - s[i].a; j++) {
	       dp[i][1][j][0] = s[i].a + j;
	  }
     }

     for (i = 0; i < m; i++) {
	  for (j = 1; j < n; j++) {
	       for (l = 0; l <= s[i].b - s[i].a; l++) {
		    if (dp[i][j][l][0] == -1) continue;

		    for (p = i + 1; p < m; p++) {
			 if (s[i].c == s[p].c) continue;

			 if (l + s[i].a + k >= s[p].a && l + s[i].a + k <= s[p].b) {
			      if (dp[p][j + 1][l + s[i].a + k - s[p].a][0] == -1 || dp[p][j + 1][l + s[i].a + k - s[p].a][0] < dp[i][j][l][0] + l + s[i].a + k) {
				   dp[p][j + 1][l + s[i].a + k - s[p].a][0] = dp[i][j][l][0] + l + s[i].a + k;
				   dp[p][j + 1][l + s[i].a + k - s[p].a][1] = i;
				   dp[p][j + 1][l + s[i].a + k - s[p].a][2] = l;
			      }
			 }

			 if ((l + s[i].a) * k >= s[p].a && (l + s[i].a) * k <= s[p].b) {
			      if (dp[p][j + 1][(l + s[i].a) * k - s[p].a][0] = -1 || dp[p][j + 1][(l + s[i].a) * k - s[p].a][0] < dp[i][j][l][0] + (l + s[i].a) * k) {
				   dp[p][j + 1][(l + s[i].a) * k - s[p].a][0] = dp[i][j][l][0] + (l + s[i].a) * k;
				   dp[p][j + 1][(l + s[i].a) * k - s[p].a][1] = i;
				   dp[p][j + 1][(l + s[i].a) * k - s[p].a][2] = l;
			      }
			 }
		    }
	       }
	  }
     }

     for (i = 0; i < m; i++) {
	  for (j = 0; j <= s[i].b - s[i].a; j++) {
	       if (dp[i][n][j][0] > x) {
		    x = dp[i][n][j][0];
		    p = i;
		    q = j;
	       }
	  }
     }

     if (x == 0) {
	  puts("NO");
     } else {
	  puts("YES");

	  for (i = 0; i < n; i++) {
	       int tmp = dp[p][n - i][q][2];

	       a[n - i - 1] = s[p].i + 1;
	       b[n - i - 1] = s[p].a + q;

	       p = dp[p][n - i][q][1];
	       q = tmp;
	  }

	  for (i = 0; i < n; i++) printf("%d %lld\n", a[i], b[i]);
     }

     return 0;
}
