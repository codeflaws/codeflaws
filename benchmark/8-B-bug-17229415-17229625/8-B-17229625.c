#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"
int main(int argc, char *argv[]) {
    char s[101];
    int l, u, r, d, i, j, k, y;
    scanf("%s", s);
    y = 0;
    for (i = 0; i < strlen(s); i++) {
        for (j = i + 1; j < strlen(s); j++) {
            l = 0; u = 0; r = 0; d = 0;
            for (k = i; k <= j; k++) {
                if (s[k] == 'L') l++;
                if (s[k] == 'U') u++;
                if (s[k] == 'R') r++;
                if (s[k] == 'D') d++;
            }
            //printf("%d %d %d %d %d %d\n", i, j, l, u, r, d);
            if ((l == r && u == d) || (l == r && u == d - 1) || (l == r && u == d + 1) || (l == r - 1 && u == d) || (l == r + 1 && u == d)) {
                y = 1;
                break;
            }
        }
    }
    if (y == 1) printf("BUG");
    else printf("OK");
    return 0;
}
