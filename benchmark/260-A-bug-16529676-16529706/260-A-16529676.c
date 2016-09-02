#include <stdio.h>

int a, b, n, i, j, k;

int main(int argc, char *argv[]) {
	scanf("%d %d %d",&a ,&b ,&n);
	a *= 10;
	k = 0;
	for(j = 0 ; j < 9 ; j++, a++){
		if(a%b == 0){
			k = 1;
			break;
		}
	}
	if(!k){
		printf("-1");
		return 0;
	}
	printf("%d",a);
	for(i = 1 ; i < n ; i++)
		printf("0");
	return 0;
}
