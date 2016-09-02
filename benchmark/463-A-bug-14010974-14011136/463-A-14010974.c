#include<stdio.h>
int main(int argc, char *argv[]){
	int n, s, x, y, max = 0, diff, flag; scanf("%d%d", &n, &s); flag = n;
	while(n-- && scanf("%d%d", &x, &y)){
		if(x <= s){
			if(100 - y < 100 && 100 - y > max)	max = 100 - y;
		}
			else	flag--;
	}
	flag == 0 ? printf("-1\n") : printf("%d\n", max);	
	return 0;
}