#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define clr(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("lol.txt", "r", stdin)

int main(int argc, char *argv[]){
    int n, k;

    while (scanf("%d %d", &n, &k) != EOF){
        if (k < (n >> 1)) puts("-1");
        else{
            int f = k - ((n - 2) >> 1);
            printf("%d %d ", f, f << 1);

            int x = (f << 1) + 2, lim = (n - 2) >> 1;
            while (lim--){
                printf("%d %d ", x, x + 1);
                x += 2;
            }

            if (n & 1) printf("%d", rand() * rand());
            puts("");
        }
    }
    return 0;
}
