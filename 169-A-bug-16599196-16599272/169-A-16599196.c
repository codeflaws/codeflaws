#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100010
#define clr(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("lol.txt", "r", stdin)

int n, a, b, ar[MAX];

int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]){
    int i, j, k, l, h, p, v, res;

    while (scanf("%d %d %d", &n, &a, &b) != EOF){
        for (i = 0; i < n; i++) scanf("%d", &ar[i]);
        qsort(ar, n, sizeof(int), compare);

        res = ar[b] - ar[a];
        printf("%d\n", res);
    }
    return 0;
}
