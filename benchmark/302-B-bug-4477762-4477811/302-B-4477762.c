#include <stdio.h>
#include <stdlib.h>

int binsearch(int *arr, int len, int elem) {
	int start = 0, end = len - 1;
	int mid = (start + end) / 2; 
	while (start <= end && (arr[mid] != elem)) {
		if (elem > arr[mid])
			start = mid + 1;		
		else
			end = mid - 1;				
		mid = (start + end) / 2;		
	}
	if (elem <= arr[mid])
		return mid;
	else
		return mid + 1;
}

int main(int argc, char *argv[]) {
	int n, m, c, t, i, x; scanf("%d %d", &n, &m);
	int cf[n];
	scanf("%d %d", &c, &t);
	cf[0] = c * t;
	for (i = 1; i < n; i++) {
		scanf("%d %d", &c, &t);
		cf[i] = cf[i - 1] + c * t;
		printf("%d ", cf[i]);
	}
	printf("\n");
	while (m--) {
		scanf("%d", &x);
		printf("%d\n", binsearch(cf, n, x) + 1);
	}
	return 0;
}