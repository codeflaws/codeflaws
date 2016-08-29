#include <stdio.h>
long long count(int n) {
	return 1ll<<(long long)(n-1);
}
int res[50];
int main(int argc, char *argv[]) {
	int n,m;
	scanf("%d%d", &n, &m);
	int left = 0, right = n-1;
	int c = 1, k = n;
	while(n--) {
		if ((long long)m > count(n)) {
			res[right] = c;
			right--;
		} else {
			res[left] = c;
			left++;
		}
		c++;
	}
	int i;
	for(i = 0; i < k-1; i++)
		printf("%d ", res[i]);
	printf("%d\n", res[k-1]);
}
