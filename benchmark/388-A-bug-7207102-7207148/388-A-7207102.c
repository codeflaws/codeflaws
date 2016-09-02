#include <stdio.h>

void A(int ZA[], int ZB[], int a, int b)
{
	int c, d, e, f;

	if (a < b) {
		c = (b - a + 1) / 2 + a;
		A(ZA, ZB, a, c - 1);
		A(ZA, ZB, c, b);
		d = c - 1;
		e = a;
		f = 0;
		while (e <= d && c <= b) {
			if (ZA[e] < ZA[c]) {
				ZB[f] = ZA[e];
				e += 1;
			} else {
				ZB[f] = ZA[c];
				c += 1;
			}
			f += 1;
		}
		while (e <= d) {
			ZB[f] = ZA[e];
			e += 1;
			f += 1;
		}
		while (c <= b) {
			ZB[f] = ZA[c];
			c += 1;
			f += 1;
		}
		while (f > 0) {
			ZA[a + f - 1] = ZB[f - 1];
			f -= 1;
		}
	}
}

int main(int argc, char *argv[])
{
	int a, b, c, d;
	int ZA[100], ZB[100], ZC[100][2];

	scanf("%d", &a);
	for (b = 0; b < a; ++b)
		scanf("%d", ZA + b);
	A(ZA, ZB, 0, a - 1);
	d = -1;
	for (b = 0; b < a; ++b) {
		for (c = 0; c <= d; ++c) {
			if (ZC[c][0] < ZA[b]) {
				ZC[c][0] = ZA[b];
				ZC[c][1] += 1;
				break;
			} else if (ZC[c][0] == ZA[b] && ZC[c][1] <= ZA[b]) {
				ZC[c][1] += 1;
			}
		}
		if (c > d) {
			d += 1;
			ZC[d][0] = ZA[b];
			ZC[d][1] = 1;
		}
	}
	printf("%d\n", d + 1);

	return 0;
}