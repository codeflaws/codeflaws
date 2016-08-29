#include <stdio.h>

int main(int argc, char *argv[]) {
	char s1, t1;
	char c1, c2, maxc;
	int s2, t2;
	int d1, d2;
	int max, min;
	int i;

	scanf("%c%d\n", &s1, &s2);
	scanf("%c%d", &t1, &t2);
	c1 = 'R';
	c2 = 'U';
	d1 = t1 - s1;
	printf("%d\n", d1);
	if (d1 < 0) {
		c1 = 'L';
		d1 = -d1;
	}
	d2 = t2 - s2;
	if (d2 < 0) {
		c2 = 'D';
		d2 = -d2;
	}
	max = d1 > d2 ? d1 : d2;
	min = d1 < d2 ? d1 : d2;
	maxc = max == d1 ? c1 : c2;
	printf("%d\n", max);
	for (i = 0; i < min; i++)
		printf("%c%c\n", c1, c2);
	for (i = 0; i < max - min; i++)
		printf("%c\n", maxc);
	return 0;
}
