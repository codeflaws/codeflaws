#include <stdio.h>

int min(int a, int b) {
	return a <= b ? a : b;
}

int main(int argc, char *argv[]) {
	int p1; int p2; int p3; int p4; int a; int b;
	
	scanf("%d%d%d%d%d%d", &p1, &p2, &p3, &p4, &a, &b);
	
	int min_p = p1;
	min_p = min(min_p, p2);
	min_p = min(min_p, p3);
	min_p = min(min_p, p4);
	
	int result = 0;
	if (a < min_p) {
		result = min_p - a;
		if (b < min_p) result = a - b + 1;
	}
	
	printf("%d\n", result);
	
	return 0;
}
