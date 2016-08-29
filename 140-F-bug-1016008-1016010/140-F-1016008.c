#include <stdio.h>

int x[200000], y[200000];

void sort(int l, int r) {
	if (l < r) {
		int i = l, j = r, m = (l + r) / 2, px = x[m], py = y[m];
		while (i <= j)
			if (x[i] < px || x[i] == px && y[i] < py)
				i++;
			else if (px < x[j] || px == x[j] && py < y[j])
				j--;
			else {
				int t = x[i]; x[i] = x[j]; x[j] = t;
				t = y[i]; y[i] = y[j]; y[j] = t;
				i++; j--;
			}

		sort(l, j); sort(i, r);
	}
}

int main(int argc, char *argv[]) {
	int n, k;
	scanf("%d%d", &n, &k);

	if (k >= n) {
		puts("-1");
		return 0;
	}

	int i;
	for (i = 0; i < n; i++)
		scanf("%d%d", &x[i], &y[i]);

	sort(0, n - 1);

	int cn = 0, pi, pj, cx[11*11], cy[11*11];
	for (pi = 0; pi <= k; pi++)
		for (pj = n - 1 - k + pi; pj < n; pj++) {
			int cxx = x[pi] + x[pj], cyy = y[pi] + y[pj];

			int i = 0, j = n - 1, c = 0;
			while (i <= j && c <= k) {
				int sx = x[i] + x[j], sy = y[i] + y[j];

				if (sx < cxx)
					i++, c++;
				else if (sx > cxx)
					j--, c++;
				else if (sy < cyy)
					i++, c++;
				else if (sy > cyy)
					j--, c++;
				else
					i++, j--;
			}

			if (c <= k)
				cx[cn] = cxx, cy[cn] = cyy, cn++;
		}

	int j;
	for (i = 0; i < cn; i++)
		for (j = i + 1; j < cn; j++)
			if (cx[j] < cx[i] || cx[j] == cx[i] && cy[j] < cy[i]) {
				int t = cx[i]; cx[i] = cx[j]; cx[j] = t;
				t = cy[i]; cy[i] = cy[j]; cy[j] = t;
			}

	j = -1;
	for (i = 1; i < cn; i++)
		if (j == -1 || !(cx[i] == cx[j] && cy[i] == cy[j]))
			j++, cx[j] = cx[i], cy[j] = cy[i];

	cn = j + 1;

	printf("%d\n", cn);
	for (i = 0; i < cn; i++)
		printf("%.1lf %.1lf\n", (double)cx[i] / 2, (double)cy[i] / 2);

	return 0;
}
