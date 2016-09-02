#include "stdio.h"

int main(int argc, char *argv[]) {
    int a, b, res;

    for(scanf("%d %d", &a, &b), res = a; a/b; res+=a/b, a=a/b+a%b);
    printf("%d", res);

    return 0;
}
