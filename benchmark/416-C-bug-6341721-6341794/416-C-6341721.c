#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

struct nodep{
	int id, n, p, k;
} p[1024], ans;
int cmp_p(const void *a, const void *b)
{
	const struct nodep *p=a, *q=b;
	int t;
	
	if ((t=q->p-p->p))
		return t;
	return p->n - q->n;
}
int vis[1024];
struct nodet{
	int n, id;
} t[1024];
int cmp_t(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}

int main(int argc, char *argv[])
{
	int np, nt, i, j;
	
	scanf("%d", &np);
	for (i=0; i<np; i++) {
		scanf("%d%d", &p[i].n, &p[i].p);
		p[i].id = i+1;
	}
	qsort(p, np, 16, cmp_p);
	scanf("%d", &nt);
	for (i=0; i<nt; i++) {
		scanf("%d", &t[i].n);
		t[i].id = i;
	}
	qsort(t, nt, 8, cmp_t);
	for (i=0; i<np; i++) {
		for (j=0; j<nt; j++)
			if (t[j].n>p[i].n && !vis[j]) {
				vis[j] = 1;
				break;
			}
		if (j != nt) {
			ans.p += p[i].p;
			ans.n++;
			p[i].k = t[j].id+1;
		}
	}
	qsort(p, np, 16, cmp_t);
	printf("%d %d\n", ans.n, ans.p);
	for (i=0; i<np; i++)
		if (p[i].k)
			printf("%d %d\n", p[i].id, p[i].k);
	
	return 0;
}
