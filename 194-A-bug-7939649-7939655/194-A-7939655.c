#include <stdio.h>

int main(int argc, char *argv[]) {
int n, k;
scanf("%d %d", &n, &k);
printf("%d\n", 3 * n - k >= 0? 3 * n - k: 0);
return 0;
}