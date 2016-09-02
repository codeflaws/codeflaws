#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *s[3000];
int a[3000];

void sort(int l, int r) {
	if (l < r) {
		int i = l, j = r, p = a[(l + r) / 2];
		while (i <= j)
			if (a[i] > p)
				i++;
			else if (a[j] < p)
				j--;
			else {
				char *ts = s[i]; s[i] = s[j]; s[j] = ts;
				int t = a[i]; a[i] = a[j]; a[j] = t;
				i++; j--;
			}

		sort(i, r); sort(l, j);
	}
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);

	int i;
	for (i = 0; i < n; i++) {
		s[i] = (char*)malloc(11);
		scanf("%s%d", s[i], &a[i]);
	}

	sort(0, n - 1);

	for (i = 0; i < n; i++)
		if (a[i] > n-i-1) {
			puts("-1");
			return 0;
		}

	int p[3000];
	for (i = 0; i < n; i++)
		p[i] = i;

	for (i = n-1; i >= 0; i--) {
		int j;
		for (j = 0; j < n; j++)
			if (p[j] == i)
				break;

		while (a[i] > 0) {
			int t = p[j]; p[j] = p[j+1]; p[j+1] = t;
			j++;
			a[i]--;
		}
	}

	for (i = 0; i < n; i++)
		printf("%s %d\n", s[p[i]], p[i] + 1);

	return 0;
}
