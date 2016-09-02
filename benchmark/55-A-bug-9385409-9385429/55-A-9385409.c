#include<stdio.h>
int main(int argc, char *argv[]) {
	int n, temp;
	scanf("%d",&n);
	//printf("%d",n & (n-1) ? printf("NO"): printf("YES"));
	if (n & (n-1)) {
		temp = printf("NO");
		printf("%d", temp);
	}
	else {
		temp = printf("YES");
		printf("%d", temp);
	}
	return 0;
}
