#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, m; scanf("%d%d", &n, &m);

	int i, j;
	if (n % 2 != 0 && m % 2 != 0 || n == 1 || m == 1) {
		printf("%d\n%d %d %d %d\n", 1, n, m, 1, 1);
		for (i = 0; i < n; i++)
			if (i % 2 == 0)
				for (j = 0; j < m; j++)
					printf("%d %d\n", i+1, j+1);
			else
				for (j = m-1; j >= 0; j--)
					printf("%d %d\n", i+1, j+1);
		printf("%d %d\n", 1, 1);
	} else if (n % 2 == 0) {
		puts("0");
		puts("1 1");
		for (i = 0; i < n; i++)
			if (i % 2 == 0)
				for (j = 1; j < m; j++)
					printf("%d %d\n", i+1, j+1);
			else
				for (j = m-1; j >= 1; j--)
					printf("%d %d\n", i+1, j+1);
		j = 0;
		for (i = n-1; i >= 0; i--)
			printf("%d %d\n", i+1, j+1);
	} else {
		int t = n; n = m; m = t;
		puts("0");
		puts("1 1");
		for (i = 0; i < n; i++)
			if (i % 2 == 1)
				for (j = m-1; j >= 1; j--)
					printf("%d %d\n", j+1, i+1);
			else
				for (j = 1; j < m; j++)
					printf("%d %d\n", j+1, i+1);
		j = 0;
		for (i = n-1; i >= 0; i--)
			printf("%d %d\n", j+1, i+1);
	}

	return 0;
}
