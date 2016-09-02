#include <stdio.h>
int main(int argc, char *argv[])
{
	int e =0 ;
	int x,n, m,a,b,y;
	scanf("%d%d", &n,&m);
	
	for (a = 0; a < 1000; a++){
		if (e == 1)break;
		for (b = 1; b < 1000; b++){
			x = a*a + b;
			y = b*b + a;
			if (x == m && y == n || y == m && x == n){
				e = 1;
				break;
			}
		}
	}
		printf("%d", e);
	
	return 0;
}