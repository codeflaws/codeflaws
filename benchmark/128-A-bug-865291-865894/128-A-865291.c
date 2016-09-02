#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j, k, l, m;
    char s[8][9];
    int dp[8][8][2] = {0};

    for (i = 0; i < 8; i++) scanf("%s", s[i]);

    dp[7][0][0] = 1;

    for (i = 0; i < 8; i++) {
	for (j = 0; j < 8; j++) {
	    for (k = 0; k < 8; k++) {
		if (dp[j][k][0] == 1) {
		    for (l = -1; l <= 1; l++) {
			for (m = -1; m <= 1; m++) {
			    if (j + l > 0 && j + l < 8 && k + m > 0 && k + m < 8) {
				dp[j + l][k + m][1] = 1;
			    }
			}
		    }
		}
	    }
	}

	for (j = 7; j >= 0; j--) {
	    for (k = 0; k < 8; k++) {
		if (s[j][k] == 'S') {
		    dp[j][k][1] = 0;

		    if (j < 7) {
			dp[j + 1][k][1] = 0;

			s[j + 1][k] = 'S';
		    }

		    s[j][k] = '.';
		}
	    }
	}

	for (j = 0; j < 8; j++) {
	    for (k = 0; k < 8; k++) {
		dp[j][k][0] = dp[j][k][1];
	    }
	}
    }

    for (i = 0; i < 8; i++) {
	for (j = 0; j < 8; j++) {
	    if (dp[i][j][0] == 1) {
		puts("WIN");

		return 0;
	    }
	}
    }

    puts("LOSE");
}
