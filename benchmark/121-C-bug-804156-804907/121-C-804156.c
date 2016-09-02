#include <stdio.h>

int lucky(int x)
{
    while (x) {
	if (x % 10 != 4 && x % 10 != 7) break;

	x /= 10;
    }

    if (x == 0) {
	return 1;
    } else {
	return 0;
    }
}

int fact(int n)
{
    int x = 1, i;

    for (i = 1; i <= n; i++) x *= i;

    return x;
}

int main(int argc, char *argv[])
{
    int n, k, p = 0, q = 2, r = 2, sum = 0, i, j;
    long long x = 1;
    int a[10000], b[100];

    scanf("%d %d", &n, &k);

    a[0] = 4;
    a[1] = 7;

    for (i = 0; i < 8; i++) {
	for (j = p; j < q; j++) {
	    a[r++] = a[j] * 10 + 4;
	    a[r++] = a[j] * 10 + 7;
	}

	p = q;
	q = r;
    }

    for (i = 1; i <= n; i++) {
	x *= i;

	if (x >= k) break;
    }

    if (i > n) {
	puts("-1");

	return 0;
    }

    if (x == k) i++;

    for (j = 0; j < r; j++) {
	if (a[j] > n - i) break;

	sum++;
    }

    q = 0;

    for (j = n - i + 1; j <= n; j++) b[q++] = j;

    for (j = n - i + 1; j < n; j++) {
	p = k / fact(n - j);

	if (k % fact(n - j) == 0) p--;

	if (lucky(j) == 1 && lucky(b[p]) == 1) sum++;

	for (i = p; i < q; i++) b[i] = b[i + 1];

	k -= p * fact(n - j);
    }

    if (lucky(n) == 1 && lucky(b[0]) == 1) sum++;

    printf("%d\n", sum);

    return 0;
}
