#include <stdio.h>
#include <stdlib.h>
#define N 10005

struct node {
	int k, i;
} a[N];
int vis[N];
int size=sizeof(a[0]);
int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}

int main(int argc, char *argv[])
{
	int lim, sum, i, cnt;
	
	scanf("%d%d", &sum, &lim);
	for (i=1; i<=lim; ++i) {
		a[i-1].i = i;
		a[i-1].k = i&(-i);
	}
	qsort(a, lim, size, cmp);
	cnt = 0;
	for (i=lim-1; i>=0; --i) {
		if (!sum)
			break;
		if (sum >= a[i].k) {
			vis[i] = 1;
			sum -= a[i].k;
			++cnt;
		}
	}
	if (sum) {
		puts("-1");
		return 0;
	}
	printf("%d\n", cnt);
	for (i=0; i<lim; ++i)
		if (vis[i])
			printf("%d ", a[i].i);
	putchar('\n');
	
	return 0;
}
