#include <stdio.h>
#include <stdlib.h>

typedef struct _cell {
	int val;
	int pos;
}CELL;

int cmp(const void* a, const void* b)
{
	if (((CELL*)a)->val == ((CELL*)b)->val) {
		return ((CELL*)a)->pos - ((CELL*)b)->pos;
	}
	return ((CELL*)b)->val - ((CELL*)a)->val;
}

int cmp2(const void* a, const void* b)
{
	return ((CELL*)a)->pos - ((CELL*)b)->pos;
}

int main(int argc, char *argv[])
{
	int n, k, i;
	CELL a[1024];
	while (scanf("%d%d", &n, &k) != EOF) {
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i].val);
			a[i].pos = i + 1;
		}
		qsort(a, n, sizeof(a[0]), cmp);
		printf("%d\n", a[k-1].val);
		qsort(a, k, sizeof(a[0]), cmp2);
		for (i = 1; i <= k; i++) {
			printf("%d%c", a[i-1].pos, i < k ? ' ' : '\n');
		}
	}
	return 0;
}

