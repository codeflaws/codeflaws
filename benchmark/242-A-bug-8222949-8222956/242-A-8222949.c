#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, d, e, f, g;
	int ZA[100], ZB[100];

	scanf("%d%d%d%d", &a, &b, &c, &d);
	g = 0;
	for (e = c; e <= a; ++e)
		for (f = d; f <= b; ++f)
			if (e > f) {
				ZA[g] = e;
				ZB[g] = f;
				g += 1;
			} else
				break;
	printf("%d\n", g);
	for (e = 0; e < g; ++e)
		printf("%d %d\n", ZA[e], ZB[e]);

	return 0;
}
