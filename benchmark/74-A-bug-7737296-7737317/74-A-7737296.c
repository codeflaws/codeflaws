#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, d, e, f, g, h, i, j, k;
	char ZA[21], ZB[21];

	scanf("%d", &a);
	j = -1;
	while (a--) {
		scanf("\n%[^ ]%d%d%d%d%d%d%d", ZA, &b, &c, &d, &e, &f, &g, &h);
		i = b * 100 - c * 50 + d + e + f + g + h;
		if (i > j) {
			for (k = 0; ZA[k]; ++k)
				ZB[k] = ZA[k];
			ZB[k] = 0;
			j = i;
		}
	}
	printf("%s\n", ZB);

	return 0;
}
