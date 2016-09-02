#include "stdio.h"
#include "stdlib.h"

int main(int argc, char ** args) {
	int i, sum = 0, x1, x2, y1, y2;
	scanf("%d", &i);
	for (; i > 0; i--) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		sum += (x2 - x1 + 1) * (y2 - y1 + 1);
	}
	printf("%d\n", sum);

}
