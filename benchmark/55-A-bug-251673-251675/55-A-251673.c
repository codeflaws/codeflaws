#include <stdio.h>

int main(int argc, char *argv[])  {
    int n;
    scanf("%d", &n);
    printf("%s", n&(n-1) ? "YES" : "NO");
    return 0;
}