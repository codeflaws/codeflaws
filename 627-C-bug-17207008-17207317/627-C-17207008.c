#include <stdio.h>
#include <stdlib.h>

void quick_sort(long long *a, long long *b, long long n) {

	int i, j, p, t;
	if (n < 2)
		return;
	p = a[n / 2];
	for (i = 0, j = n - 1;; i++, j--)
	{
		while (a[i] < p)
			i++;
		while (p < a[j])
			j--;
		if (i >= j)
			break;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		t = b[i];
		b[i] = b[j];
		b[j] = t;
	}
	quick_sort(a, b, i);
	quick_sort(a + i, b + i, n - i);
}


int main(int argc, char *argv[])
{
	long long d, n, m, p[200000], x[200000], i, j, poz, kap, tekcena = 0, moze = 1, potrosnja = 0, min, minpoz;
	scanf("%I64d%I64d%I64d", &d, &n, &m);
	for (i = 0; i<m; i++)
		scanf("%I64d%I64d", &x[i], &p[i]);
	poz = 0;
	kap = n;
	i = 0;
	quick_sort(x, p, m);
	i = 0;
	if (n >= d)
		printf("%I64d", potrosnja);
	else
	{
		while (poz<d)
		{
			if (x[i] <= poz + n)
			{
				min = p[i];
				minpoz = i;
				while (i<m && p[i]>tekcena && x[i] <= poz + n)
				{
					if (p[i]<min)
					{
						min = p[i];
						minpoz = i;
					}
					i++;
				}
				if (i == m)
				{
					if (poz + n >= d)
					{
						potrosnja += (d - poz - kap)*tekcena;
						kap = 0;
						poz = d;
					}
					else
					{
						potrosnja += (n - kap)*tekcena;
						kap = n + poz - x[minpoz];
						poz = x[minpoz];
						tekcena = p[minpoz];
						i = minpoz + 1;
						if (i == m)
						{
							if (poz + n >= d)
							{
								potrosnja += (d - poz - kap)*tekcena;
								poz = d;
							}
							else
							{
								poz = d;
								moze = 0;
							}
						}
					}
				}
				else if (x[i]>poz + n)
				{
					potrosnja += (n - kap)*tekcena;
					kap = n + poz - x[minpoz];
					poz = x[minpoz];
					tekcena = p[minpoz];
					i = minpoz + 1;
				}
				else if (p[i] <= tekcena)
				{
					potrosnja += (x[i] - poz - kap)*tekcena;
					kap = 0;
					poz = x[i];
					tekcena = p[i];
					i++;
					if (i == m)
					{
						if (poz + n >= d)
						{
							potrosnja += (d - poz)*tekcena;
							poz = d;
						}
						else
						{
							poz = d;
							moze = 0;
						}
					}
				}
			}
			else
			{
				moze = 0;
				poz = d;
			}
		}
		if (!moze)
			printf("Nemoguce");
		else
			printf("%I64d", potrosnja);
	}
	return 0;
}















