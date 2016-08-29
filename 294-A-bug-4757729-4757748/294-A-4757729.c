#include <stdio.h>

int main(int argc, char *argv[])
{
	int A[7];
	int n, i, x, y, m;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &x, &y);
		x--;
		if (x)
			A[x - 1] += y - 1;
		if (x < n - 1)
			A[x + 1] += A[x] - y;
		A[x] = 0;
	}

	for (i = 0; i < n; i++)
		printf("%d\n", A[i]);
	return 0;
}
