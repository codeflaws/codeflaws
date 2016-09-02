#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%i", &n);

	//puts( (n & 1) == 0 ? "white 1 2" : "black");
	if ((n & 1) == 0)
		puts("white\n1 2");
	else
		puts("black");
	return 0;
}
