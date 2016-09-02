#include <stdio.h>

int main(int argc, char *argv[])
{
	int A[5], B[5];
	int n, m, i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	scanf("%d", &m);
	for (i = 0; i < m; i++)
		scanf("%d", &B[i]);

	int ratio = -1;
	int cou = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			if (B[i] % A[j] == 0)
			{
				if (B[i] / A[j] > ratio)
				{
					ratio = B[i] / A[j];
					cou = 1;
				}
				else if (B[i] / A[j] == ratio)
				{
					cou++;
				}
				break;
			}
	}

	printf("%d", cou);
	return 0;
}
