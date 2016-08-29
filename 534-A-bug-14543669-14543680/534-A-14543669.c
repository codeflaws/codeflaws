#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, i, j;
    scanf("%d", &n);
    if(n == 1) {
        printf("1\n1");
    }
    else if(n ==2) {
        printf("1\n1");
    }
    else if(n == 3) {
        printf("2\n1 3");
    }
    else if(n == 4) {
        printf("3\n1 4 2");
    }
    else {
        printf("%d\n", n);
        for(i = 1; i <= n; i++){
            if(i % 2 != 0) {
                printf("%d ", i);
            }
        }
        for(i = 1; i <= n; i++) {
            if(i % 2 == 0) {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
