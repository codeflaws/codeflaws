#include <stdio.h>

int floor_int(int a, int b) {
	if (a % b == 0)
		return a / b;
	else
		return a / b + 1;
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);

	int i, l[500], w[500], h[500];
	for (i = 0; i < n; i++)
		scanf("%d%d%d", &l[i], &w[i], &h[i]);

	int m;
	scanf("%d", &m);
	int rl[500], rw[500], rc[500];
	for (i = 0; i < m; i++)
		scanf("%d%d%d", &rl[i], &rw[i], &rc[i]);

	int j, c = 0;
	for (i = 0; i < n; i++) {
		int mc = 1000000000;
		for (j = 0; j < m; j++) {
			int cc = floor_int(floor_int(2*l[i] + 2*w[i], rw[j]), rl[j] / h[i]) * rc[j];
			if (cc < mc)
				mc = cc;
			// printf("i = %d, j = %d, mc = %d\n", i + 1, j + 1, cc);
		}

		c += mc;
	}

	printf("%d\n", c);

	return 0;
}
