#include <stdio.h>
#include <stdlib.h> 
int a[100000], n;
int cmp(const void *x, const void *y) 
{
	if(*(int*)x < *(int*)y) return -1;
	if(*(int*)x > *(int*)y) return 1;
	return 0;
}
int main(int argc, char *argv[])
{
	int flag = 1, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	qsort(a, n, sizeof(int), cmp);
	for(i = 0; i < n - 1; i++) {
		if(2 * a[i] > a[i + 1]) {
			flag = 0;
			break;
		}
	}
	printf(flag? "NO" : "YES");
	return 0;
}
