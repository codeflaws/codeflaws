#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

typedef long long ll;

#ifdef __linux__
#define LLD	"%lld"
#else
#define LLD	"%I64d"
#endif

typedef struct pt_s {
        int     x;
        int     y;
	char	fl;
} pt_t;
pt_t    pts[100010];
int	spc[100010];
pt_t	out[100010];

int comp (const void *a, const void *b)
{
        pt_t     *x = (pt_t *)a;
        pt_t     *y = (pt_t *)b;
    
	int	dx = x->y - x->x;
	int	dy = y->y - y->x;

	if (dx == dy) {
		if ((x->x < y->x) || (x->y < y->y)) {
			return -1;
		} 
		return 1;
	}
	return dx-dy;
}

int bs (int end, ll tgt)
{
        int mid;
	int st = 0;

        while (st <= end) {
                int tmp;

                mid = (st+end)/2;
                tmp = pts[mid].y-pts[mid].x;

                if (tmp < tgt) {
                        st = mid+1;
                } else if (tmp > tgt) {
                        end = mid - 1;
                } else {
                        if (pts[mid].fl) {
                                st = mid+1;
                        } else {
                                end = mid-1;
                        }
                }
        }
        return st;
}


int main(int argc, char *argv[])
{
	int i, j;
	int	si = 0;
	int n;
	int	mx, my;

	scanf ("%d", &n);

	for (i = 0; i < n; i++) {
		scanf ("%d%d", &pts[i].x, &pts[i].y);
	}
	for (i = 0; i < n; i++) {
		scanf ("%d", &spc[i]);
	}
	qsort (pts, n, sizeof (*pts), comp);

	mx = my = -2000000;
	for (i = 0; i < n; i++) {
		int	ti = bs (n-1, spc[i]);
		int	y = pts[ti].y;
		int	x = pts[ti].x;
		int	d  = y-x;

		if ((spc[i] == d) && 
			(x >= mx || y >= my)) {

			out[i] = pts[ti];
			pts[ti].fl = 1;
			mx = x;
			my = y;
		} else {
			puts("NO");
			return 0;
		}
	}
	
	puts("YES");
	for (i = 0; i < n; i++) {
		printf ("%d %d\n", out[i].x, out[i].y);
	}
	
	return 0;
}
