#include <stdio.h>

long long h(long long n) {
    return n <= 2 ? n*n : (n*n+1)/2;
}

int main(int argc, char *argv[]) {
    int t, i;
    long long n;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%I64d", &n);
        printf("%I64d\n", 1 - h(n)%2);
    }
    return 0;
}
