#include <stdio.h>
#include <stdlib.h>

struct envelope {
	int w, h, i, j, k;
} *ee;

int compare(const void *a, const void *b) {
	struct envelope *pa = (struct envelope *) a;
	struct envelope *pb = (struct envelope *) b;

	return pb->w != pa->w ? pb->w - pa->w : pb->h - pa->h;
}

int main(int argc, char *argv[]) {
	int n, w, h, i, j, jmax, kmax;

	scanf("%d%d%d", &n, &w, &h);
	ee = malloc(n * sizeof(struct envelope));
	for (i = 0; i < n; i++) {
		scanf("%d%d", &ee[i].w, &ee[i].h);
		ee[i].i = i;
		ee[i].j = -1;
		ee[i].k = 0;
	}

	qsort(ee, n, sizeof(struct envelope), compare);
	for (i = 0; i < n; i++) {
		jmax = -1;
		kmax = 0;

		for (j = 0; j < i; j++)
			if (ee[j].w > ee[i].w && ee[j].h > ee[i].h && kmax < ee[j].k) {
				kmax = ee[j].k;
				jmax = j;
			}
		ee[i].k = kmax + 1;
		ee[i].j = jmax;
	}

	jmax = -1;
	kmax = 0;
	for (j = 0; j < n; j++)
		if (ee[j].w > w && ee[j].h > h && kmax < ee[j].k) {
			kmax = ee[j].k;
			jmax = j;
		}
	printf("%d\n", kmax);
	for (j = jmax; j != -1; j = ee[j].j)
		printf("%d ", ee[j].i + 1);
	printf("\n");
	return 0;
}
