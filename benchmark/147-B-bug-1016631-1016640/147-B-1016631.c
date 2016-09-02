#include <stdio.h>
#include <string.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int n;

int mul(int a[300][300], int b[300][300]) {
	int u, v, w, t[300][300];

	for (u = 0; u < n; u++)
		for (v = 0; v < n; v++) {
			t[u][v] = -1000000000;
			for (w = 0; w < n; w++)
				t[u][v] = max(t[u][v], a[u][w] + b[w][v]);
		}

	memcpy(a, t, sizeof(t));
}

int main(int argc, char *argv[]) {
	int m;
	scanf("%d%d", &n, &m);

	int i, u, v, a[300][300];

	for (u = 0; u < n; u++)
		for (v = 0; v < n; v++)
			a[u][v] = u == v ? 0 : -1000000000;

	for (i = 0; i < m; i++) {
		scanf("%d%d", &u, &v);
		u--; v--;
		scanf("%d%d", &a[u][v], &a[v][u]);
	}

	int b[10][300][300];

	memcpy(b[1], a, sizeof(a));
	for (i = 2; i <= 9; i++) {
		memcpy(b[i], b[i-1], sizeof(a));
		mul(b[i], a);
	}

	int l = 2, h = n + 1;
	while (l < h) {
		m = (l + h) / 2;

		/* int b[300][300];
		memcpy(b, a, sizeof(b)); */

		int c[300][300];
		for (u = 0; u < n; u++)
			for (v = 0; v < n; v++)
				c[u][v] = u == v ? 0 : -1000000000;

		i = m;
		int j = 1;
		while (i) {
			if (i & 1)
				mul(c, b[j]);
			j++;
			i >>= 1;
		}

		for (u = 0; u < n; u++)
			if (c[u][u] > 0)
				break;

		if (u != n)
			h = m;
		else
			l = m + 1;
	}
	
	if (l == n + 1)
		puts("0");
	else
		printf("%d\n", l);
	
	return 0;
}
