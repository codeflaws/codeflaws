#include <stdio.h>

#define min(x,y) ((x)<(y)?(x):(y))
int main(int argc, char *argv[]) {
	int n, x[3];
	scanf("%d", &n);
	while (n--) {
		getchar();
		x[getchar() - '1']++;
	}
	printf("%d", min(x[0] + x[1], min(x[1] + x[2], x[0] + x[2])));
	return 0;
}