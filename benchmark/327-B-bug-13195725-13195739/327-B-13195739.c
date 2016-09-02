#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, i;

	scanf("%d", &n);

	for(i=n+1; i<=2*n; i++) {
		printf("%d ", i);
	}

	return 0;
}