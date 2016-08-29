#include <stdio.h>

int Map[100][100];

int main(int argc, char *argv[])
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    if(n > a * b) {
        puts("-1");
        return 0;
    }
    int i, j;
    int num = 1;
    for(i = 0; i < a; ++i) {
        for(j = 0; j < b; ++j) {
            Map[i][j] = num;
            if(++num > n) {
                break;
            }
        }
        if(num > n) {
            break;
        }
    }
    for(i = 0; i < a; ++i) {
        if(i & 1) {
            if(b & 1) {
                for(j = 0; j < b; ++j) {
                    printf("%d ", Map[i][j]);
                }
            } else {
                for(j = b - 1; j >= 0; --j) {
                    printf("%d ", Map[i][j]);
                }
            }
        } else {
            for(j = 0; j < b; ++j) {
                printf("%d ", Map[i][j]);
            }
        }
        puts("");
    }
    return 0;
}
