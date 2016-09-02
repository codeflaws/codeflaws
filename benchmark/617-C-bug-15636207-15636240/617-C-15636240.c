#include <stdio.h>

typedef long long int64;

int64 p2(int x)
{
	return ((int64) x) * ((int64) x);
}

int64 min(int64 a, int64 b)
{
	return a < b? a : b;
}

int main(int argc, char *argv[])
{
	const N = 2000;
	int n, x1, y1, x2, y2, x, y, i, j; 
	int64 r1[N], r2[N], bet, maxr2, maxr1, minval, d18 = 1000000000000000000;
	
	scanf("%d %d %d %d %d", &n, &x1, &y1, &x2, &y2);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		r1[i] = p2(x1 - x) + p2(y1 - y);
		r2[i] = p2(x2 - x) + p2(y2 - y);
	}

	minval = d18;
	for (i = 0; i < n; i++)
	{
		bet = r1[i];
		maxr2 = 0;
		for (j = 0; j < n; j++)
			if (r1[j] > bet)
				if (r2[j] > maxr2)
					maxr2 = r2[j];
		minval = min(minval, bet + maxr2);
	}

	for (i = 0; i < n; i++)
	{
		bet = r2[i];
		maxr1 = 0;
		for (j = 0; j < n; j++)
			if (r2[j] > bet)
				if (r1[j] > maxr1)
					maxr1 = r1[j];
		minval = min(minval, bet + maxr1);
	}
	
	while (minval/d18 == 0)
		d18 /= 10;
	while (d18)
	{
		printf("%d", minval/d18);
		minval %= d18;
		d18 /= 10;
	}
	printf("\n");

	return 0;
}
