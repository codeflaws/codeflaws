#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, d, e;
	int ZA[3000], ZB[3000], ZC[3000];

	scanf("%d", &a);
	for (b = 0; b < a; ++b)
		scanf("%d", ZA + b);
	for (b = 0; b < a - 1; ++b) {
		d = b;
		for (c = b + 1; c < a; ++c)
			if (ZA[d] < ZA[c])
				d = c;
		if (d != b) {
			ZB[e] = b;
			ZC[e] = d;
			c = ZA[d];
			ZA[d] = ZA[b];
			ZA[b] = c;
			e += 1;
		}
	}
	printf("%d\n", e);
	for (c = 0; c < e; ++c)
		printf("%d %d\n", ZB[c], ZC[c]);

	return 0;
}
