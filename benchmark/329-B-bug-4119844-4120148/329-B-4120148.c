#include <stdio.h>
#include <string.h>

int a[1111][1111], g[1111][1111];
int fx[1111111], fy[1111111], r = 0, d;
char s[1111];

void push(int x, int y) {
	if (g[x][y] < 0) {
		g[x][y] = d;
		fx[++r] = x;
		fy[r] = y;
	}
}

int main(int argc, char *argv[]) {
	int n, m, p, q;
	int i, j, k;
	scanf("%d%d", &n, &m);
	memset(a, 0, sizeof a);
	memset(g, 0, sizeof g);
	for (i = 1; i <= n; ++i) {
		scanf("%s", s + 1);
		for (j = 1; j <= m; ++j)
			if (s[j] == 'E') { fx[0] = i; fy[0] = j; }
			else if (s[j] != 'T') {
				g[i][j] = -1;
				k = s[j] ^ 48;
				if (k <= 9) a[i][j] = k;
				else { p = i; q = j; }
			}
	}

	for (i = 0; i <= r; ++i) {
		j = fx[i];
		k = fy[i];
		d = g[j][k] + 1;
		push(j - 1, k);
		push(j + 1, k);
		push(j, k - 1);
		push(j, k + 1);
	}

	for (k = 0, i = 1; i <= n; ++i)
		for (j = 1; j <= m; ++j)
			if (g[i][j] >= 0 && g[i][j] <= g[p][q]) k += a[i][j];
	printf("%d", k);
	return 0;
}