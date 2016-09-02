#include <stdio.h>


int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);

    int m[4], x = 1;
    while(scanf("%d%d%d%d", &m[0], &m[1], &m[2], &m[3]) == 4) {
        int i, j, k;
        for(i = 0; i < 2; i++) {
            k = n - m[i];
            for(j = 2; j < 4; j++) {
                k -= m[j];
                if(k >= 0) {
                    printf("%d %d %d\n", x, m[i], n - m[i]);
                    return 0;
                }
            }
        }
        x++;
    }

    puts("-1");
    return 0;
}
