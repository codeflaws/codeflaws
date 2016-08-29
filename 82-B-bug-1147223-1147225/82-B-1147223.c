#include <stdio.h>
#include <stdlib.h>

struct set
{
    int size;
    int *values;
};

int icmp(int *a, int *b)
{
    return *a - *b;
}

int scmp(struct set *a, struct set *b)
{
    int *p = a -> values, *q = b -> values;

    while(*p == *q)
    {
        p ++;
        q ++;
    }

    return *p - *q;
}

int main(int argc, char *argv[])
{
    int n, m, i, j, k;
    struct set *sets, fset, diff;

    scanf("%d", &n);
    m = n * (n - 1) / 2;

    sets = (struct set *) malloc(m * sizeof(struct set));
    for(i = 0; i < m; i ++)
    {
        scanf("%d", &sets[i].size);
        sets[i].values = (int *) malloc(sets[i].size * sizeof(int));
        for(j = 0; j < sets[i].size; j ++)
            scanf("%d", sets[i].values + j);

        qsort(sets[i].values, sets[i].size, sizeof(int), (int (*)(const void *, const void *)) icmp);
    }

    if(m == 1)
    {
        printf("1 %d\n", sets[0].values[0]);
        printf("%d", sets[0].size - 1);
        for(i = 1; i < sets[0].size; i ++)
            printf(" %d", sets[0].values[i]);
        printf("\n");
    }

    qsort(sets, m, sizeof(struct set), (int (*)(const void *, const void *)) scmp);
    
    fset.size = 0;
    fset.values = (int *) malloc((sets[0].size < sets[1].size ? sets[0].size : sets[1].size) * sizeof(int));

    i = j = 0;
    while(i < sets[0].size && j < sets[1].size)
    {
        if(sets[0].values[i] == sets[1].values[j])
        {
            fset.values[fset.size ++] = sets[0].values[i];
            i ++;
            j ++;
        }
        else if(sets[0].values[i] < sets[1].values[j])
            i ++;
        else
            j ++;
    }

    fset.values[fset.size] = -1;

    printf("%d", fset.size);
    for(i = 0; i < fset.size; i ++)
        printf(" %d", fset.values[i]);
    printf("\n");

    n --;
    for(i = 0; i < n; i ++)
    {
        printf("%d", sets[i].size - fset.size);
        for(j = k = 0; k < sets[i].size; k ++)
        {
            if(sets[i].values[k] != fset.values[j])
                printf(" %d", sets[i].values[k]);
            else
                j ++;
        }

        printf("\n");
    }

    return 0;
}
