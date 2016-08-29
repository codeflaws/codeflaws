#include <stdio.h>
//#include <conio.h>

const MMAX = -2000000001, MMIN = 2000000001;

long min(long a, long b){
	if (a < b) return a;
	return b;
}

long max(long a, long b){
	if (a > b) return a;
	return b;
}


int main(int argc, char *argv[])
{
	long n, i, a[100002];
	scanf("%ld", &n);
	for (i = 1; i <= n; i++)
		scanf("%ld", &a[i]);
	a[0] = MMAX; a[n+1] = MMIN;
	for (i = 1; i <= n; i++){
		printf("%ld %ld", min(a[i] - a[i-1], a[i+1] - a[i]), max(a[i] - a[1], a[n] - a[i]));
		printf("\n");
	}
	return 0;
}
