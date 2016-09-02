#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, n, vb, vs;
	int *x;
	int xu, yu;
	int imin;
	double min, t;

	scanf("%d%d%d", &n, &vb, &vs);
	x = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &x[i]);
	scanf("%d%d", &xu, &yu);
	min = DBL_MAX;
	for (i = 1; i < n; i++) {
		t = (double) x[i] / vb + hypot(yu, x[i] - xu) / vs;

		printf("%f\n", t);
		if (min > t) {
			imin = i + 1;
			min = t;
		} else if (min == t
				&& hypot(yu, x[i] - xu) < hypot(yu, x[imin - 1] - xu)) {
			imin = i + 1;
			min = t;
		}
	}
	printf("%d\n", imin);
	return 0;
}
