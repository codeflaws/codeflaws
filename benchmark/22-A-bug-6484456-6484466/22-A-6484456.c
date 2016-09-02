#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 1000

bool check (int i, int a[]) {
	int j;

	for (j = 0; j < i; j++)
		if (a[j] == a[i]) return true;
	return false;
} 

int cmp (const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main(int argc, char *argv[]) {
	int n, i, j, a[MAX + 1];

	scanf ("%d", &n);

	for (i = 0, j = 0; j < n; i++, j++)
	{
		scanf ("%d", &a[i]);

		if (check(i, a))
			i--;
	}

	qsort (a, i, sizeof (int), cmp);

	if (i >= 1)	printf("%d\n", a[1]);
	else printf("NO\n");

	return 0;
}