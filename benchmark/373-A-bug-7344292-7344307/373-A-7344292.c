#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	int ZA[9];
	char ZB[5];

	scanf("%d", &a);
	for (b = 0; b < 9; ZA[b++] = 0);
	for (b = 0; b < 4; ++b) {
		scanf("%s", ZB);
		for (c = 0; ZB[c]; ++c)
			ZA[ZB[c] - '1'] += 1;
	}
	for (b = 0; b < 9 && ZA[b] <= 2 * a; ++b);
	if (b == 9)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
