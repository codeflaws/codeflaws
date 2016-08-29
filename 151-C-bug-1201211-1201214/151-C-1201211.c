#include <stdio.h>

int main(int argc, char *argv[])
{
	long long q, p, i, j;
	scanf("%I64d", &q);
	for (i = 2LL; i * i <= q; ++i)
		if (q % i == 0LL)
		{
			for (j = 2LL; j * j <= p; ++j)
				if (p % j == 0LL)
				{
					printf("1\n%I64d\n", i * j);
					return 0;
				}
			puts("2");
			return 0;
		}
	puts("1\n0");
	return 0;
}
