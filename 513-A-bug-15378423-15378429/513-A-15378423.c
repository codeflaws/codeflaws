#include <stdio.h>

int main(int argc, char *argv[]) {
    int n1, n2, k1, k2;
    scanf("%d %d %d %d", &n1, &n2, &k1, &k2);
    printf("%d %d %d %d\n", n1, n2, k1, k2);
    if (n1 <= n2)
    {
        printf("Second\n");
    }
    else
    {
        printf("First\n");
    }
    return 0;
}