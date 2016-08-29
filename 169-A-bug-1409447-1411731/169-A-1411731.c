#include <stdio.h>
#include <string.h>
void BSort(long *, int);

int main(int argc, char *argv[])
{
	int i, n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	long h[n];
	for (i = 0; i < n; i++) {
		scanf("%ld", &h[i]);
	}	
	BSort(h, n);
	printf("%ld", h[a - 1] - h[a]);
	return 0;
}

void BSort(long *a, int n)
{
	int i, j;
	long tmp;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[j] > a[i]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
	return;
}
