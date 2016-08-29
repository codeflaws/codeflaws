#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <inttypes.h>
#include <assert.h>


/* CF312Div2 - D */
typedef	long long int ll;

typedef	struct map_s {
	ll	le;
	ll 	ri;
} map_t;

map_t	mp[100005];

int
ascomp (const void *a, const void *b)
{
        ll     x = ((map_t *)a)->le;
        ll     y = ((map_t *)b)->le;
	ll     s = x-y;

	if (s < 0) {
		return -1;
	} else if (s > 0) {
		return 1;
	}
	
        return 0;
}

#define LC(_v, _h) ((_v) << (_h))
#define RC(_v, _h) ((_v+1) << (_h))

int main(int argc, char *argv[])
{
	int	i;
	int	th, nq, nb = 0;
	ll	ml, mr;
	ll	res = -1;

	scanf("%d%d", &th, &nq);

	ml = LC(1ll, th-1);
	mr = RC(1ll, th-1);

	for (i = 0; i < nq; i++) {
		int	h, a;
		ll	l, r;
		scanf("%d%I64d%I64d%d", &h, &l, &r, &a);

		l = LC(l, th-h);
		r = RC(r, th-h);
		if (a) {
			if (l > ml) {
				ml = l;
			}
			if (r < mr) {
				mr = r;
			}	
		} else {
			mp[nb].le = l;
			mp[nb++].ri = r;
		}
	}

	mp[nb].ri = mr;
	mp[nb++].le = mr;
	qsort (mp, nb, sizeof (*mp), ascomp);

	for (i = 0; i < nb; i++) {
		ll tl = mp[i].le;
		ll tr = mp[i].ri;
		
		if (ml >= mr) {
			break;
		}

		if (tl > ml+1) {
			puts ("Data not sufficient!");
		} else if (tl == ml+1) {
			if (res != -1) {
				puts ("Data not sufficient!");
				return 0;
			}
			res = ml;
		}

		if (tr > ml) {
			ml = tr;
		}
	}

	if (res == -1) {
		puts ("Game cheated!");
	} else {
		printf("%I64d\n", res);
	}
	return 0;
}
