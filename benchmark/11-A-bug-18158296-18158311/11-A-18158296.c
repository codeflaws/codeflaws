#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, d;
	int i, *b;
	int cnt = 0;
	
	scanf("%d%d", &n, &d);
	b = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &b[i]);
	for (i = 1; i < n; i++)
		if (b[i - 1] >= b[i]) {
			cnt += (b[i - 1] - b[i]) / d + 1;
#if 0
			b[i] += d * ((b[i - 1] - b[i]) / d + 1);
#else
			b[i] += b[i - 1] - b[i] + d;
#endif
		}
	printf("%d\n", cnt);
	return 0;
}
