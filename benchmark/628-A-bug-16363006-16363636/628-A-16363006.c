#include <stdio.h>
#include <inttypes.h>
#include <math.h>
int64_t numOfMatches(int64_t n)
{
	if(n == 2)
		return 1;
	int64_t i, k;
	for(i = 0; pow(2, i) <= n; i++);
	k = pow(2, i - 1);
	return k/2 + numOfMatches(n - k/2);
}
int main(int argc, char *argv[])
{
	int64_t n, b, p, tt, tb, tm;
	scanf("%"PRId64" %"PRId64" %"PRId64"", &n, &b, &p);
	tt = n * p;
	tm = numOfMatches(n);
	tb = tm * (2 * b + 1);
	printf("%"PRId64" %"PRId64"\n", tb, tt);
	return 0;
}