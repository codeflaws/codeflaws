#include<stdio.h>

int main(int argc, char *argv[]) {
	int n, x, y;
	scanf("%d %d %d", &n, &x, &y);
	if ((x==n|x==(n+1))&(y==n|y==(n+1))) {
		puts("NO");
	} else {
		puts("YES");
	}
	return 0;
}
