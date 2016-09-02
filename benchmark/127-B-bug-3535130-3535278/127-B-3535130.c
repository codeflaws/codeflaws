#include <stdio.h>

void fill0(int *a) {
	int i;
	for (i=0; i<101;i++) a[i] = 0;
}

int *processInput(int n) {
	int *a = malloc(sizeof(int)*101);
	int i, tmp;
	fill0(a);
	for (i=0; i<n; i++) {
		scanf("%d", &tmp);
		a[tmp]++;
	}
	return a;
}

int sigma(int *a) {
	int i;
	int sum = 0;
	for (i=0; i<101;i++) sum += a[i];
	return sum;
}
	
int main(int argc, char *argv[]) {
	int n, i;
	int *a;
	scanf("%d", &n);
	a = processInput(n);
	for (i=0; i<n; i++) a[i] /= 2;
	printf("%d\n", sigma(a)/2);
	return 0;
}