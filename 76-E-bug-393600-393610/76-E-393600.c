#include <stdio.h>

int main(int argc, char *argv[])
{
	char buf[64];
	int N;
	int i;
	int x, y;
	long long sum_x=0, sum_y=0, sum_x2=0, sum_y2=0;
	int n;

	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d\n", &N);

	for (i = 0; i < N; i++) {
		fgets(buf, sizeof(buf), stdin);
		n = sscanf(buf, "%d %d\n", &x, &y);

		sum_x += x;
		sum_x2 += x*x;
		sum_y += y;
		sum_y2 += y*y;
	}

	printf("%l64d\n", N * sum_x2 - sum_x * sum_x + N * sum_y2 - sum_y * sum_y);

	return 0;
}
