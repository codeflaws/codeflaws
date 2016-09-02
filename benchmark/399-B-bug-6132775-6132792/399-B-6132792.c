#include <stdio.h>

int n;
char s[55];
long long res;

int main(int argc, char *argv[]) { int i;
    scanf("%d%s", &n, s);
    for( i = 0; i < n; i++) if(s[i] == 'B') res |= 1ll << i;
    printf("%lld\n", res);
    return 0;
}
