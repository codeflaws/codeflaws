#include <stdio.h>
#define N 1001

int a[N];

int main(int argc, char *argv[]) {
	int n, i, x;

	scanf("%d", &n);

	for(i=0; i<N; i++) {
		a[i] = 0;
	}

	for(i=0; i<n; i++) {
		scanf("%d", &x);
		a[x]++;
	}

	for(i=0; i<N; i++) {
		if(a[i] > n>>1) {
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");
	return 0;
}