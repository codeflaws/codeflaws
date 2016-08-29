#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int n, m; scanf("%d%d", &n, &m);

	int i, j, k[100], a[100][100];
	for (i = 0; i < n; i++) {
		scanf("%d", &k[i]);
		for (j = 0; j < k[i]; j++)
			scanf("%d", &a[i][j]);
	}

	int l, c[100][101];
	for (i = 0; i < n; i++) {
		int s[101];
		s[0] = 0;
		for (j = 0; j < k[i]; j++)
			s[j+1] = s[j] + a[i][j];

		for (j = 0; j < k[i]; j++) {
			c[i][j] = 0;
			for (l = 0; l <= j; l++) {
				int ss = s[l] + (s[k[i]] - s[k[i]-(j-l)]);
				if (ss > c[i][j])
					c[i][j] = ss;
			}
			// printf("i = %d j = %d -> %d\n", i, j, c[i][j]);
		}
	}

	int c1[100001], c2[100001];
	memset(c1, 0, sizeof(c1));
	for (i = 0; i < n; i++) {
		for (j = 0; j <= m; j++) {
			c2[j] = 0;
			for (l = 0; l <= k[i]; l++)
				if (j >= l) {
					int ccc = c1[j-l] + c[i][l];
					if (ccc > c2[j])
						c2[j] = ccc;
				}
		}
		memcpy(c1, c2, sizeof(c1));
	}

	printf("%d\n", c1[m]);

	return 0;
}
