#include <stdio.h>
int main(int argc, char *argv[]){
	int n, x, y, a = 0, b = 0, c = 0;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &x, &y);
		a += x;
		b += y;	
		if(x % 2 != y %2)
			c++;
	}
	if(a % 2 == 0 && b % 2 == 0)
		printf("0\n");
	else
		if(a % 2 == 1 && b % 2 == 1 && c)
			printf("1\n");
		else
			printf("-1\n");
	return 0;
}