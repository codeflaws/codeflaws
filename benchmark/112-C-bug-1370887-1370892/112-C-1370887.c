#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned long n, y, t;
	unsigned long long x;
	scanf("%li %I64i %li", &n, &x, &y);
	if (y>=n) {
		t=y-n+1;
		if ((unsigned long long)t*t<x-n+1) printf("-1\n");
		else {
			printf("%li\n", t);
			for (; n>1; n--) printf("1\n");
		};
	}
	else printf("-1\n");
	return 0;
}
