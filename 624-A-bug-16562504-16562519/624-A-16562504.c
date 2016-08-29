#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int d, L, v1, v2;
	double time;
	
	scanf("%d %d %d %d", &d, &L, &v1, &v2);
	
	time = (L-d)/(v1+v2);
	printf("%f", time);
	
	return 0;
}
