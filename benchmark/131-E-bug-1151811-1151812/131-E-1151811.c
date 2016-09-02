#include <stdio.h>
#include <string.h>

int x[100000], y[100000], a[100000], di;

int less(int i, int j) {
	if (di == 0)
		return y[i] < y[j];
	else if (di == 1)
		return x[i] < x[j];
	else
		return x[i] < x[j];
}

void sort(int l, int r) {
	if (l >= r)
		return;

	int i = l, j = r, p = a[(l + r) / 2];
	while (i <= j)
		if (less(a[i], p))
			i++;
		else if (less(p, a[j]))
			j--;
		else {
			int t = a[i]; a[i] = a[j]; a[j] = t;
			i++; j--;
		}

	sort(i, r); sort(l, j);
}

int dx[4] = {1, 0, 1, 1};
int dy[4] = {0, 1, 1, -1};

int main(int argc, char *argv[]) {
	int n, m; scanf("%d%d", &n, &m);

	int i;
	for (i = 0; i < m; i++) {
		scanf("%d%d", &x[i], &y[i]);
		x[i]--; y[i]--;
	}

	int c[100000];
	for (di = 0; di < 4; di++) {
		int li, h[300000], l[100000], ln[100000];
		memset(h, -1, sizeof(h));
		li = 0;
		for (i = 0; i < m; i++) {
			int j = x[i]*dx[di] + y[i]*dy[di] + (n-1);
			l[li] = i; ln[li] = h[j]; h[j] = li; li++;
		}

		int an;
		for (i = 0; i < 2*n; i++) {
			an = 0;

			li = h[i];
			while (li != -1) {
				a[an++] = l[li];
				li = ln[li];
			}

			sort(0, an-1);

			int j;
			for (j = 0; j < an; j++) {
				if (j > 0)
					c[a[j]]++;
				if (j + 1 < an)
					c[a[j]]++;
			}
		}
	}

	int cc[9];
	memset(cc, 0, sizeof(cc));
	for (i = 0; i < m; i++)
		cc[c[i]]++;

	for (i = 0; i < 9; i++)
		printf("%d ", cc[i]);
	putchar('\n');

	return 0;
}
