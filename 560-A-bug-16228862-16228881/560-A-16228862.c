#include <stdio.h>

int n, h;

int main(int argc, char *argv[]) {
	scanf("%d",&n);
	while(--n){
		scanf("%d",&h);
		if(h == 1){
			printf("-1");
			return 0;
		}
	}
	printf("1");
	return 0;
}
