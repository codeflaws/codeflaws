#include <stdio.h>
int main(int argc, char *argv[]) {
    int n;
    while (scanf("%d", &n) == 1)
        if (n == 2) printf("white\n1 2\n");
        else printf("black\n");
    return 0;
}
