#include <stdio.h>
#include <stdlib.h>

struct point {
    int x, idx, rk;
};

int cmp1 (const void *a, const void *b)
{
    struct point *m = (struct point *)a, *n = (struct point *)b;
    return m->x - n->x;
}

int cmp2 (const void *a, const void *b)
{
    struct point *m = (struct point *)a, *n = (struct point *)b;
    return m->idx - n->idx;
}

int main(int argc, char *argv[])
{
    int i, n, m;
    scanf ("%d %d", &n, &m);

    struct point pts[n];
    for (i = 0; i < n; i++) {
        scanf ("%d", &pts[i].x);
        pts[i].idx = i;
    }

    for (i = 0; i < m; i++) {
        int x, y;
        scanf ("%d %d", &x, &y);
    }

    qsort (pts, n, sizeof (struct point), cmp1);
    for (i = 0; i < n; i++) {
        pts[i].rk = i % 2;
        //printf ("new %d %d %d\n", pts[i].x, pts[i].idx, pts[i].rk);
    }

    qsort (pts, n, sizeof (struct point), cmp2);
    for (i = 0; i < n; i++) {
        printf ("%d ", i% 2);
    }

    printf ("\n");

    return 0;
}
