#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define clr(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("lol.txt", "r", stdin)

long long fib[52];

void F(int n, long long k, int inc){
    if (n == 1) printf("%d ", 1 + inc);
    if (n == 2){
        if (k == 1) printf("%d %d ", 1 + inc, 2 + inc);
        else printf("%d %d ", 2 + inc, 1 + inc);
    }
    if (n < 3) return;

    if (k <= fib[n - 1]){
        printf("%d ", 1 + inc);
        F(n - 1, k, inc + 1);
    }
    else{
        printf("%d %d ", 2 + inc, 1 + inc);
        F(n - 2, k - fib[n - 1], inc + 2);
    }
}

int main(int argc, char *argv[]){
    int i, j, n;
    long long k;

    fib[0] = 1, fib[1] = 1;
    for (i = 2; i < 52; i++) fib[i] = fib[i - 1] + fib[i - 2];

    while (scanf("%d %lld", &n, &k) != EOF){
        F(n, k, 0);
        puts("");
    }
    return 0;
}
