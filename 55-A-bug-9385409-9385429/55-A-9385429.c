#include<stdio.h>
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	//n&n-1 ? printf("NO"): printf("YES");
	if (n & n-1) {
		printf("NO");
	}
	else {
		printf("YES");
	}
	return 0;
}
