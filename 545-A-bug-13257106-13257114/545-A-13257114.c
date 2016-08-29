#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, a[101][101], c[101] = {0}, i, j, count = 0;
    scanf(" %d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf(" %d", &a[i][j]);
            if(!(a[i][j]) || (a[i][j]) == -1) {
                c[i]++;
                c[j]++;
            }
            else if((a[i][j]) == 1) {
                c[i] = -100000;
                c[j]++;
            }
            else if((a[i][j]) == 2) {
                c[j] = -100000;
                c[i]++;
            }
            else if((a[i][j]) == 3) {
                c[i] = -100000;
                c[j] = -100000;
            }
        }
    }
    for(i = 1; i <= 100; i++) {
        if(c[i] > 0) count++;
    }
    printf("%d\n", count);
    for(i = 1; i <= 100; i++) {
        if(c[i] > 0) printf("%d ", i);
    }
    return 0;
}
