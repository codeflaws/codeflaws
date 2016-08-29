#include <stdio.h>

int a[20], b[20];

double minof(double a, double b)
{
	return (a < b ? a : b);
}

int main(int argc, char *argv[])
{
	int n, v, i, s;
	double x;

	scanf("%d %d", &n, &v);
	s = 0;
	for(i = 0; i < n; i ++)
	{
		scanf("%d", a + i);
		s += a[i];
	}
	for(i = 0; i < n; i ++)
		scanf("%d", b + i);

	x = (double) v / s;
	for(i = 0; i < n; i ++)
		x = minof(x, (double) b[i] / a[i]);

	printf("%.8lf\n", x * s);

	return 0;
}
