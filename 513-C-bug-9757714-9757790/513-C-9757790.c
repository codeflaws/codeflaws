#include <stdio.h>

#define MAX_COMP	5
#define MAX_BID		10000

int min(int x, int y)
{
	return (x <= y) ? x : y;
}

int max(int x, int y)
{
	return (x >= y) ? x : y;
}

int main(int argc, char *argv[])
{
	int n;
	int l[MAX_COMP];
	int r[MAX_COMP];
	int i, j, k, z;
	double p, q, u;

	scanf("%d", &n);
	for(i = n; i --;)
		scanf("%d %d", &l[i], &r[i]);

	p = 0.0;
	for(i = 1; i <= MAX_BID; i ++)
	{
		for(k = 0; k < n; k ++)
		{
			if(!(l[k] <= i && i <= r[k]))
				continue;

			q = 1 / (double)(r[k] - l[k] + 1);

			for(j = 0; j < n; j ++)
			{
				if(i >= r[j])
					continue;

				if(k == j)
					continue;

				u = q;
				u *= (r[j] - max(l[j], i + 1) + 1) / (double)(r[j] - l[j] + 1);

				for(z = 0; z < n; z ++)
				{
					if(z == j || z == k)
						continue;

					if(l[z] > i)
					{
						u = 0.0;
						break;
					}

					if(z > k)
						u *= (min(r[z], i) - l[z] + 1) / (double)(r[z] - l[z] + 1);
					else
						u *= (min(r[z], i - 1) - l[z] + 1) / (double)(r[z] - l[z] + 1);
				}

				p += i * u;
			}

			for(j = k + 1; j < n; j ++)
			{
				if(!(l[j] <= i && i <= r[j]))
					continue;

				if(k == j)
					continue;

				u = q;
				u *= 1 / (double)(r[j] - l[j] + 1);

				for(z = 0; z < n; z ++)
				{
					if(z == j || z == k)
						continue;

					if(l[z] > i)
					{
						u = 0.0;
						break;
					}

					if(z > k && z > j)
						u *= (min(r[z], i) - l[z] + 1) / (double)(r[z] - l[z] + 1);
					else
						u *= (min(r[z], i - 1) - l[z] + 1) / (double)(r[z] - l[z] + 1);
				}

				p += i * u;
			}
		}
	}

	printf("%.9lf\n", p);

	return 0;
}
