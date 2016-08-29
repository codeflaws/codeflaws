#include "stdio.h"

int main(int argc, char *argv[]) {
    int a, b, res;

    for(scanf("%d %d", &a, &b), res = a; a=a/b; res+=a);
    printf("%d", res);

    return 0;
}
