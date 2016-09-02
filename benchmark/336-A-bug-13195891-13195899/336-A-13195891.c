#include <stdio.h>

int main(int argc, char *argv[]) {
	int a, b, x, y, u, v;

	scanf("%d%d", &a, &b);

	if(a*b > 0) {
		if(a>0) {
			printf("0 %d %d 0\n", a+b, a+b);
		} else {
			printf("%d 0 0 %d", a+b, a+b);
		}
	} else {
		if(a>0) {
			printf("0 %d %d 0", b-a, a-b);
		} else {
			printf("%d 0 0 %d\n", a-b, b-a);
		}
	}

	return 0;

}