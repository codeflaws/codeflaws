#include <stdio.h>
#include <stdlib.h>

#define min(a, b) (((a) < (b)) ? (a) : (b))

const int color[] = {['R'] = 0, ['G'] = 1, ['B'] = 2, ['Y'] = 3, ['W'] = 4};
int combiA[4], combiB[4], table[5][5], min = 10;

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

void hoge(int maxA, int maxB) {
    int i, j;
    int flag[5][5] = {0}, ary[25], size;

    for (i = 0; i < maxA; i++)
        for (j = 0; j < 5; j++)
            flag[combiA[i]][j] |= 1 << combiA[i];

    for (j = 0; j < maxB; j++)
        for (i = 0; i < 5; i++)
            flag[i][combiB[j]] |= 1 << combiB[j] + 5;

    size = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (table[i][j])
                ary[size++] = flag[i][j];

    qsort(ary, size, sizeof(int), &compare);

    for (i = 1; i < size && ary[i] != ary[i - 1]; i++) ;
    if (i == size)
        min = min(min, maxA + maxB);
}

void makeCombiB(int d, int maxA, int maxB) {
    int i;

    if (d == maxB) {
        hoge(maxA, maxB);
        return;
    }

    for (i = d == 0 ? 0 : combiB[d - 1] + 1; i < 5; i++) {
        combiB[d] = i;
        makeCombiB(d + 1, maxA, maxB);
    }
}

void makeCombiA(int d, int maxA) {
    int i;

    if (d == maxA) {
        for (i = 0; i < 5; i++)
            makeCombiB(0, maxA, i);
        return;
    }

    for (i = d == 0 ? 0 : combiA[d - 1] + 1; i < 5; i++) {
        combiA[d] = i;
        makeCombiA(d + 1, maxA);
    }
}

int main(int argc, char *argv[]) {
    int i;
    int n;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        char ch1, ch2;

        scanf(" %c%c", &ch1, &ch2);

        table[color[ch1]][ch2 - '1'] = 1;
    }

    for (i = 0; i < 5; i++)
        makeCombiA(0, i);

    printf("%d\n", min);

    return 0;
}
