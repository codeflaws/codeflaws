#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	a[2][64];
int	b[64];

int main(int argc, char *argv[])
{
	int n;
	int	i,j;
	int	min = INT_MAX;
	int	pmin = INT_MAX;
	scanf ("%d", &n);

	for (j = 1; j <= n-1; ++j) {
		int	t;
		scanf ("%d", &t);
		a[0][j] = t;
	}
	for (j = 0; j < n-1; ++j) {
		int	t;
		scanf ("%d", &t);
		a[1][j] = t;
	}
	for (j = 1; j <= n-1; ++j) {
		a[0][j] = a[0][j] + a[0][j-1];
	}
	for (j = n-1; j >= 0; --j) {
		a[1][j] = a[1][j] + a[1][j+1];
	}

	for (j = 0; j < n; ++j) {
		scanf ("%d", &b[j]);	
	}

	for (j = 0; j < n; j++) {
		int s;

		s = a[0][j] + b[j] + a[1][j];

		if (s < min) {
			pmin = min;
			min = s;
		} else if (s < pmin) {
			pmin = s;
		}
	}

	printf ("%d\n", min+pmin);

	return 0;
}
