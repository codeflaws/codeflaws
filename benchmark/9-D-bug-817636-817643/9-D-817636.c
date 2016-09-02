#include <stdio.h>

int main(int argc, char *argv[])
{
     int n, h, i, j, k, l, m;
     long long sum = 0;
     long long dp[35][35][35] = {0};

     scanf("%d %d", &n, &h);

     for (i = 0; i < n; i++) dp[i][i][0] = 1;

     for (i = 1; i < n; i++) {
	  for (j = 0; j < n - i; j++) {
	       for (k = 1; k < n; k++) {
		    for (l = j + 1; l < i + j; l++) {
			 for (m = 0; m < k - 1; m++) {
			      dp[j][i + j][k] += dp[j][l - 1][m] * dp[l + 1][i + j][k - 1];
			      dp[j][i + j][k] += dp[j][l - 1][k - 1] * dp[l + 1][i + j][k -1];
			 }

			 dp[j][i + j][k] += dp[j][l - 1][k - 1] * dp[l + 1][i + j][k - 1];
		    }

		    dp[j][i + j][k] += dp[j][i + j - 1][k - 1];
		    dp[j][i + j][k] += dp[j + 1][i + j][k - 1];
	       }
	  }
     }

     for (i = h - 1; i < n; i++) sum += dp[0][n - 1][i];

     printf("%lld\n", sum);

     return 0;
}
