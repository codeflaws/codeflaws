#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, d;
	int ZA[101];

	for (b = 1; b <= 100; ZA[b++] = 0);
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &b);
		ZA[b] += 1;
	}
	c = 0;
	d = 0;
	for (b = 1; b <= 100; ++b) {
		c += ZA[b] / 4;
		d += ZA[b] % 4 / 2;
	}
	printf("%d\n", c + d / 2);

	return 0;
}
