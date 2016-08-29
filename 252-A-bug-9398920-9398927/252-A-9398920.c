#include<stdio.h>

#define FOR(i, a, b)	for(i = a; i <= b; i++)
#define ROF(i, a, b)	for(i = a; i >= b; i--)

int main(int argc, char *argv[])
{
	int i, arr[1000], j, n, s = 0, max = -1;
	scanf("%d", &n);
	
	FOR(i, 0, n - 1)	scanf("%d", &arr[i]);

	FOR(i, 0, n - 1) {
		FOR(j, i + 1, n - 1) {
			s = s ^ arr[j];
			if(s > max)
				max = s;
		}
		if(arr[i] > max)
			max = arr[i];
	}

	printf("%d", max);
	return 0;
}
