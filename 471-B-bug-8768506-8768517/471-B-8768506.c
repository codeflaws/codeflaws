#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idx, h;
} Rec;

int compare(const void *a, const void *b) {
    return ((Rec *)a)->h - ((Rec *)b)->h;
}

int main(int argc, char *argv[]) {
    int i, j;
    int n;
    Rec rec[2000];
    int cnt;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &rec[i].h);
        rec[i].idx = i + 1;
    }

    qsort(rec, n, sizeof(Rec), &compare);

    cnt = 0;
    for (i = 1; i < n; i++)
        cnt += rec[i].h == rec[i - 1].h;
    if (cnt < 2) {
        puts("NO");
        return 0;
    }

    puts("YES");
    for (i = 0; i < 3; i++) {
        cnt = 0;
        for (j = 0; j < n; j++) {
            printf("%d ", rec[j].idx);

            if (j > 0 && rec[j].h == rec[j - 1].h)
                if (cnt++ || i == 2) {
                    Rec tmp = rec[j];
                    rec[j] = rec[j - 1];
                    rec[j - 1] = tmp;
                }
        }
        putchar('\n');
    }

    return 0;
}
