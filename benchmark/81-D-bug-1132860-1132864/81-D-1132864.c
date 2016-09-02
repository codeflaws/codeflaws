#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, m; scanf("%d%d", &n, &m);

	int i, a[1000], p[1000];
	for (i = 0; i < m; i++) {
		scanf("%d", &a[i]);
		p[i] = i;
	}

	int j;
	for (i = 0; i < m; i++)
		for (j = i+1; j < m; j++)
			if (a[p[j]] > a[p[i]]) {
				int t = p[i]; p[i] = p[j]; p[j] = t;
			}

	int s[1000];
	for (i = 0; i < n; i++) {
		int mi = -1;
		for (j = 0; j < m; j++)
			if (a[p[j]] > 0 && (mi == -1 || a[p[j]] > a[mi]) && (i == 0 || p[j] != s[i-1])
					&& (i != n-1 || p[j] != s[0]))
				mi = p[j];

		if (mi == -1)
			break;
		a[mi]--;
		s[i] = mi;
	}

	if (i != n) {
		puts("-1");
		return 0;
	}

	for (i = 0; i < n; i++)
		printf("%d ", s[i]+1);
	putchar('\n');

	return 0;
}
