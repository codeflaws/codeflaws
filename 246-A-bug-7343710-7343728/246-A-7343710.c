#include <stdio.h>

int main (int argc, char *argv[])
{
    int n;

    scanf("%d", &n);
    if (n > 1) {
        while (n--) {
            printf("%d ", n+1);
        }
        printf("\n");
    } else {
        printf("-1\n");
    }
    return 0;
}
