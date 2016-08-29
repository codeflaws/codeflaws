#include <stdio.h>
#include <stdlib.h>

void shift_t (int *x, int n, int init, int end) {
    int i;
    x[init] = 0;
    if (end + 1 < n)
        x[end+1] = 1;
}

int main(int argc, char *argv[]) {
    int *x, *z, *a, *b, *c, *d;
    int p, q, l, r, i, j, max_x, max_z, max, count = 0, stop;
    scanf ("%d %d %d %d", &p, &q, &l, &r);
    
    a = malloc (p * sizeof (int));
    b = malloc (p * sizeof (int));
    c = malloc (q * sizeof (int));
    d = malloc (q * sizeof (int));
        
    for (i = 0; i < p; i++)
        scanf ("%d %d", &a[i], &b[i]);    
    for (i = 0; i < q; i++)
        scanf ("%d %d", &c[i], &d[i]);
    
    max_x = d[q-1] + r + 1;
    max_z = b[p-1] + 1;
    if (max_z > max_x)
        max = max_z;
    else max = max_x;
    
    x = malloc (max_x * sizeof (int));
    
    z = malloc (max * sizeof (int));
    
    for (i = 0; i < max_x; i++)
        x[i] = 0;
        
    for (i = 0; i < max; i++)
        z[i] = 0;
    
    for (i = 0; i < p; i++) {
        for (j = a[i]; j <= b[i]; j++) {
            z[j] = 1;
        }
    }

    for (i = 0; i < q; i++) 
        for (j = c[i]; j <= d[i]; j++)
            x[j+l] = 1; 
    
    for (i = l; i <= r; i++) {
        stop = 0;
        for (j = 0; j < max_x; j++)
            if (z[j] == 1 && x[j] == 1 && stop == 0) {
                count++;
                stop = 1;
            }
        for (j = 0; j < q; j++)
            shift_t (x, max_x, c[j]+i, d[j]+i);

    }
    printf ("%d\n", count);
    free (a);
    free (b);
    free (c);
    free (d);
    free (x);
    free (z);
    return 0;
}
