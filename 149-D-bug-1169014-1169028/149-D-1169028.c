#include <stdio.h>
#include <string.h>

int dp[701][701][3][3];
int a[700];
int n;
int m = 1000000007;

int dfs(int x, int y, int p, int q)
{
     int i, j;
     long long sum = 0;

     if (dp[x][y][p][q] >= 0) return dp[x][y][p][q];

     if (x >= y) return dp[x][y][p][q] = 1;

     for (i = 0; i < 3; i++) {
	  for (j = 0; j < 3; j++) {
	       if (i == j) continue;

	       if (i > 0 && j > 0) continue;

	       if (p > 0 && p == i) continue;

	       if (a[x] == y - 1 && q > 0 && q == j) continue;

	       sum = (sum + (long long)dfs(x + 1, a[x], i, j) * dfs(a[x] + 1, y, j, q) % m) % m;
	  }
     }

     return dp[x][y][p][q] = sum;
}

int main(int argc, char *argv[])
{
     int i, j, k, l;
     char s[701];

     scanf("%s", s);

     n = strlen(s);

     for (i = 0; i < n; i++) {
	  if (s[i] == '(') {
	       int c = 1;

	       for (j = i + 1; j < n; j++) {
		    if (s[j] == '(') {
			 c++;
		    } else {
			 c--;
		    }

		    if (c == 0) break;
	       }

	       a[i] = j;
	       a[j] = i;
	  }
     }

     for (i = 0; i <= n; i++) {
	  for (j = 0; j <= n; j++) {
	       for (k = 0; k < 3; k++) {
		    for (l = 0; l < 3; l++) {
			 dp[i][j][k][l] = -1;
		    }
	       }
	  }
     }

     printf("%d\n", dfs(0, n, 0, 0));

     return 0;
}
