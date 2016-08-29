#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define val(i) (a + (b * i))
#define clr(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("lol.txt", "r", stdin)

int n, l, q;
long long a, b, t, m;

long long Sum(long long a, long long d, long long n){
    long long x = (n * ((a << 1LL) + ((n - 1) * d) ));
    return (x >> 1LL);
}

bool Check(int l, int r){
    int n = (r - l + 1);
    if (val(r) > t) return false;

    long long x = Sum(l, 1, n);
    long long y = (x * b) + (a * n);
    return (y <= (m * t));
}

int main(int argc, char *argv[]){
    int i, j, k, res, low, high, mid;

    while (scanf("%I64d %I64d %d", &a, &b, &n) != EOF){
        while (n--){
            scanf("%d %I64d %I64d", &l, &t, &m);
            l--;

            res = -2;
            if (val(l) <= t){
                low = l, high = 10000000;
                while ((low + 1) < high){
                    mid = (low + high) >> 1;
                    if (Check(l, mid)) low = mid;
                    else high = mid;
                }

                if (Check(l, high)) res = high;
                else res = low;
            }

            printf("%d\n", ++res);
        }
    }
    return 0;
}
