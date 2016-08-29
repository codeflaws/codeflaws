#include <stdio.h>

int min(int a, int b) {
	return a < b ? a : b;
}

int max(int a, int b) {
	return a > b ? a : b;
}

long long maxll(long long a, long long b) {
	return a > b ? a : b;
}

int main(int argc, char *argv[]) {
	int n, m; scanf("%d%d", &n, &m);

	int i, a1[50], as[50], al[50], ar[50];
	for (i = 0; i < n; i++) {
		int an; scanf("%d", &an);

		as[i] = al[i] = ar[i] = 0;
		a1[i] = -1e9;
		
		int j, s = 0;
		for (j = 1; j <= an; j++) {
			int a; scanf("%d", &a);
			a1[i] = max(a1[i], a);
			as[i] += a;
			al[i] = max(al[i], as[i]);
			ar[i] = min(ar[i], as[i]);

			if (s < 0)
				s = 0;
			else
				a1[i] = max(a1[i], s);
		}

		ar[i] = as[i] - ar[i];

		// printf("%d %d %d %d\n", a1[i], as[i], al[i], ar[i]);
	}

	long long mm = -1e18, s = 0;
	for (i = 0; i < m; i++) {
		int j; scanf("%d", &j); j--;

		mm = maxll(mm, a1[j]);
		if (s > 0)
			mm = maxll(mm, s + al[j]);
		s = maxll(0, maxll(ar[j], s + as[j]));
	}

	printf("%I64d\n", mm);

	return 0;
}
