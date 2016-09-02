#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, m;
	char **a;
	int i, imin, imax, j, jmin, jmax, k;

	scanf("%d%d", &n, &m);
	a = malloc(n * sizeof(*a));
	imin = -1, jmax = 0, jmin = m - 1;
	for (i = 0; i < n; i++) {
		a[i] = malloc(m * sizeof(*a[i]));
		scanf("%s", a[i]);

		for (j = 0; j < m; j++)
			if (a[i][j] == '*')
				break;
		for (k = m - 1; k >= 0; k--)
			if (a[i][k] == '*')
				break;

		if (j < m || k >= 0) {
			if (imin == -1)
				imin = i;
			imax = i;
		}
		if (jmin > j)
			jmin = j;
		if (jmax < k)
			jmax = k;
	}

	for (i = imin; i <= imax; i++) {
		for (j = jmin; j <= jmax; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
	return 0;
}
