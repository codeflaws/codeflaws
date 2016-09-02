#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, k;
	scanf("%d %d", &n, &k);
	int a[2*n], i;
	for (i = 0; i < 2*n; i++) a[i] = i + 1;
	
	for (i = 0; i < k; i++) {
		int temp = a[2*i];
		a[2*i] = a[2*i+1];
		a[2*i+1] = temp;
	}
	
	for (i = 0; i < n; i++) printf("%d ", a[i]);
	return 0;
}