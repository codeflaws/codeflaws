#include<stdio.h>

int main(int argc, char *argv[]) {
	int n, i, j, numbers[5000], elements[5001] = { 0 }, unique = 0;
	scanf("%d", &n);
	j = n + 1;
	for (i = 0; i < j; i++) {
		scanf("%d", &numbers[i]);
		if (numbers[i] < j && !elements[numbers[i]]) {
			elements[numbers[i]] = 1;
			unique++;
		}
	}
	printf("%d", n - unique);
	return 0;
}