#include<stdio.h>
#include<string.h>
#define Min(a, b) ((a) < (b)) ? (a) : (b)
int i, j, min = 2000000, arr[200000], n;
char str[200000];
int main(int argc, char *argv[]) {
	scanf("%s", str);
	n = strlen(str);
	for (i = 0; i < n; i++) arr[i+1] = arr[i] + (str[i] <= 'Z' && str[i] >= 'A');
	for (i = 0; i <= n; i++) min = Min(min, i - arr[i] + arr[n] - arr[i]);
	printf("%d", min);
	return 0;
}
