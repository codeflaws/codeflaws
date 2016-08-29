#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, d;

	scanf("%d%d", &a, &b);
	if (b < a / 2)
		printf("-1\n");
	else {
		b = b - a / 2;
		c = 1;
		d = 1;
		if (b) {
			b += 1;
			printf("%d %d ", b, 2 * b);
			c = 2 * b + 1;
			d = 3;
		}
		for (; d <= a; d += 1)
			printf("%d ", c++);
		printf("\n");
	}

	return 0;
}
