#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long ll;
#ifdef __linux__
#define LLD     "%lld"
#else
#define LLD     "%I64d"
#endif

typedef struct lg_s {
	int	li;
	int	cnt;
} lg_t;

typedef struct snd_s {
	int	au;
	int	sub;
} snd_t;

snd_t	mov[200006];
lg_t	lcnt[200006];
lg_t	lli[200006];
int	inl[200006];

int cntcom (const void *a, const void *b)
{
        lg_t     *x = (lg_t  *)a;
        lg_t	 *y = (lg_t *)b;

        return (y->cnt - x->cnt);
}
int lcomp (const void *a, const void *b)
{
        lg_t     *x = (lg_t  *)a;
        lg_t	 *y = (lg_t *)b;

        return (x->li - y->li);
}

int descomp (const void *a, const void *b)
{
        int     x = *(int  *)a;
        int	y = *(int *)b;

        return (y - x);
}


int main(int argc, char *argv[])
{
	int	i, j;
	int	n, m;
	int	cl = 0;
	int	cnt = 0;
	int	lc = 0;
	int	ans = 1;
	int	amx = 0;
	int	smx = 0;
	
	scanf ("%d", &n);

	for (i = 0; i < n; ++i) {
		scanf ("%d", &inl[i]);
	}

	qsort (inl, n, sizeof (*inl), descomp);

	for (i = 0; i <= n; ++i) {
		if (cl != inl[i]) {
			if (cnt) {
				lcnt[lc].li = cl;
				lcnt[lc++].cnt = cnt;
			}		
			cl = inl[i];
			cnt = 0;
		}
		++cnt;
	}
	memcpy (lli, lcnt, lc * sizeof (*lcnt));
	qsort (lcnt, lc, sizeof (*lcnt), cntcom);
	qsort (lli, lc, sizeof (*lli), lcomp);

	scanf ("%d", &m);
	for (i = 0; i < m; ++i) {
		scanf ("%d", &mov[i].au);
	}
	for (i = 0; i < m; ++i) {
		scanf ("%d", &mov[i].sub);
	}

	for (i = 0; i < m; i++) {
		lg_t	tmp;
		lg_t	*res;
		int	ac = 0, sc = 0;
		tmp.li = mov[i].au;

		res = bsearch (&tmp, lli, lc,
				sizeof (*lli), lcomp);

		if (res) {
			ac = res->cnt;
		}

		tmp.li = mov[i].sub;

		res = bsearch (&tmp, lli, lc,
				sizeof (*lli), lcomp);

		if (res) {
			sc = res->cnt;
		}

		if (ac > amx) {
			ans = i+1;
			amx = ac;
			smx = sc;
		} else if (ac == amx) {
			if (sc > smx) {
				ans = i+1;
				smx = sc;
			}
		}
	}

	printf ("%d\n", ans);
	return 0;
}
