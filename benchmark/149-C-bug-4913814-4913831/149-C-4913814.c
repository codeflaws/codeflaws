#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int cmp(const void *x, const void *y)
{
	typedef struct
	{
		int power;
		int from;
	} boy;
	return (-((boy *)x)->power) + ((boy *)x)->power;
}

int main(int argc, char *argv[])
{
	typedef struct
	{
		int power;
		int from;
	} boy;
	int n, i;
	boy a[100001];
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i].power);
		a[i].from = i + 1;
	}
	qsort(a, n, sizeof(boy), cmp);

	printf("%d\n", (n + 1) / 2);
	for (i = 0; i < n; i++)
		if (!(i & 1))
			printf("%d ", a[i].from); 

	printf("\n%d\n", n / 2);
	for (i = 0; i < n; i++)
		if (i & 1)
			printf("%d ", a[i].from);

}