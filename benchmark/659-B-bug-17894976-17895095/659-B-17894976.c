#include <stdio.h>
#include <stdlib.h>

typedef struct Participant {
    char *name;
    int region, score;
} Participant;

int compare(const void *a, const void *b);

/*
 * http://www.codeforces.com/problemset/problem/659/B
 */
int main(int argc, char *argv[])
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    char **a = calloc(n, sizeof(char *));
    Participant *p = calloc(n, sizeof(Participant));

    for (int i = 0; i < n; i++) {
        a[i] = calloc(11, sizeof(char));
        p[i].name = a[i];

        scanf("%s %d %d", a[i], &p[i].region, &p[i].score);
    }

    int (* comparator)(const void *, const void*) = compare;
    qsort(p, n, sizeof(Participant), comparator);

    int i = 0;
    while (i < n - 3) {
        if (p[i].region == p[i + 2].region) {
            if (p[i].score == p[i + 2].score || p[i + 1].score == p[i + 2].score) {
                printf("?\n");
            } else {
                printf("%s %s\n", p[i].name, p[i + 1].name);
            }

            int r = p[i].region;
            while (i < n && p[i].region == r) {
                i++;
            }
        } else {
            printf("%s %s\n", p[i].name, p[i + 1].name);
            i += 2;
        }
    }

    if (i == n - 3) {
        if (p[i].score == p[i + 2].score) {
            printf("?\n");
        } else {
            printf("%s %s\n", p[i].name, p[i + 1].name);
        }
    } else if (i != n) {
        printf("%s %s\n", p[i].name, p[i + 1].name);
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    Participant *x = (Participant *)a;
    Participant *y = (Participant *)b;

    if (x->region < y->region) {
        return -1;
    } else if (x->region > y->region) {
        return 1;
    } else {
        if (x->score < y->score) {
            return 1;
        } else if (x->score > y->score) {
            return -1;
        }
    }

    return 0;
}
