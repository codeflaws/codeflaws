#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100010
#define clr(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("lol.txt", "r", stdin)

int n, d, h;

int main(int argc, char *argv[]){
    int i, j, k, a, b, x, l;

    while (scanf("%d %d %d", &n, &d, &h) != EOF){
        if (n == 1) puts("1 2");
        else if (d > (h << 1)) puts("-1");
        else if (d == 1) puts("-1");
        else{
            for (i = 0; i < h; i++, k++) printf("%d %d\n", i + 1, i + 2);
            if (h == d){
                l = 1 + (h != 1), k = h + 2;
                while (k <= n){
                    printf("%d %d\n", l, k);
                    k++;
                }
            }
            else{
                l = 1, k = h + 2;
                for (i = 0; i < (d - h); i++){
                    printf("%d %d\n", l, k);
                    l = k++;
                }

                l = 1 + (h != 1);
                while (k <= n){
                    printf("%d %d\n", l, k);
                    k++;
                }
            }
        }
    }
    return 0;
}
