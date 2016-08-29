#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,i;
	scanf("%d\n",&n);
	for (i=0;i<n;i++) n-=i;
	while ((i-n)%2) {
		n-=i;
		i++;
	}
	printf("%d\n",i);
	return 0;
}
