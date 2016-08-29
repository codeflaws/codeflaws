#include <stdio.h>
#include <memory.h>
#include <math.h>

#define N 2000
#define HT 4194304 // 2**22
#define M 2654435769
int x[N], y[N], n;

struct A
{
	int x, y, c;
	struct A *next;
};
struct A a[N*(N-1)];

struct L
{
	struct A *head;
	struct A *tail;
};
struct L ht[HT];

int main(int argc, char *argv[])
{
	int i, j, k, f, h1, h2, h, ans = 0;
	struct L *l;
	struct A *pa, *pb;

	memset(a, 0, sizeof(a));
	memset(ht, 0, sizeof(ht));

	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d %d", &x[i], &y[i]);

	for (i = 0, k = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++, k++)
		{
			pa = &a[k];
			if (x[i] == x[j])
			{
				pa->x = 0;
				pa->y = abs(y[i] - y[j]);
			}
			else if (x[i] > x[j])
			{
				pa->x = x[i] - x[j];
				pa->y = y[i] - y[j];
			}
			else
			{
				pa->x = x[j] - x[i];
				pa->y = y[j] - y[i];
			}
			h1 = (M * pa->x) & 2047;
			h2 = (M * pa->y) & 2047;
			h = (h1 << 11) | h2;
			// printf("%09d - %d %d [%d %d %d %d]\n", h, pa->x, pa->y, x[i], y[i], x[j], y[j]);
			l = &ht[h];
			if (l->head)
			{
				f = 0;
				for (pb = l->head; pb; pb = pb->next)
				{
					if (pa->x == pb->x && pa->y == pb->y) 
					{ 
						f = 1; 
						break; 
					}
				}
				if (f)
					pb->c++;
				else
					l->tail = l->tail->next = pa;
			}
			else
			{
				l->head = l->tail = pa;
			}
		}
	}

	for (i = 0; i < k; i++)
		ans += a[i].c * (a[i].c + 1);

	printf("%d\n", ans/4);

	return 0;
}