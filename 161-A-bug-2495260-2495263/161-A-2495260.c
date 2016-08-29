#include <stdio.h>
#include <stdlib.h>
#define NN 100005

typedef struct _soldier {
	int l, r;
	int id;
}SOLDIER;

typedef struct _match {
	int sid;
	int vid;
}MATCH;

int cmp(const void* a, const void* b)
{
	SOLDIER* c = (SOLDIER*)a;
	SOLDIER* d = (SOLDIER*)b;
	if (c->r == d->r) {
		return c->l - d->l;
	}
	return c->r - d->r;
}

int main(int argc, char *argv[])
{
	int n, m, x, y, i, j, cnt;
	int an[NN], am[NN];
	SOLDIER sd[NN];
	MATCH mt[NN];
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	while (scanf("%d%d%d%d", &n, &m, &x, &y) != EOF) {
		for (i = 0; i < n; i++) {
			scanf("%d", &an[i]);
			sd[i].id = i;
			sd[i].l = an[i] - x;
			sd[i].r = an[i] + y;
		}
		for (i = 0; i < m; i++) {
			scanf("%d", &am[i]);
		}
		qsort(sd, n, sizeof(sd[0]), cmp);
		i = j = cnt = 0;
		while (i < m && j < n) {
			if (am[i] >= sd[j].l && am[i] <= sd[j].r) {
				mt[cnt].sid = sd[j].id;
				mt[cnt].vid = i;
				cnt++; i++; j++;
			} else if (am[i] < sd[j].l) {
				i++;
			} else if (am[i] > sd[j].r) {
				j++;
			}
		}
		printf("%d\n", cnt);
		for (i = 0; i < cnt; i++) {
			printf("%d %d\n", mt[i].sid + 1, mt[i].vid + 1);
		}
	}
	return 0;
}

