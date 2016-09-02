#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define min(a,b) ((a)<(b) ? (a):(b))
#define max(a,b) ((a)>(b) ? (a):(b))
#define clr(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("lol.txt", "r", stdin)

int main(int argc, char *argv[]){
    int i, j, k, l, x, y, z, x1, y1, x2, y2;

    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) != EOF){
        if ((x1 + y1) <= max(x2, y2)) puts("Polycarp");
        else if ((x1 + y1) == 1) puts("Polycarp");
        else if (( (x1 - 1 + 1) == x2 && (y1 + 1) == y2)) puts("Polycarp");
        else if (( (x1 + 1) == x2 && (y1 - 1 + 1) == y2)) puts("Polycarp");
        else if (max(x2, y2) < (x1 + y1)) puts("Vasilly");
        else{
            puts("Polycarp");
        }
    }
    return 0;
}
