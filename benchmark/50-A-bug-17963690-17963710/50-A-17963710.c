#include <stdio.h>
//#include <conio.h>


int max(int a, int b){
	if (a > b) return a;
	return b;
}


int main(int argc, char *argv[]){
	int a[20][20];
	int i, j, n, m;
	scanf("%d %d", &m, &n);
	
	for (i = 0; i <= m+2; i++){
		for (j = 0; j <= n+ 2; j++){
			a[i][j] = 0;
		}
	}
	
	int s = -1;
	for (i = 1; i <= max(m+2, n+2); i++){
		if (!(i % 2 == 0)) s++;
		a[2][i] = s;
		a[i][2] = s;
	}
	
	
	for (i = 3; i <= m + 1; i++){
		for (j = 3; j <= n + 1; j++){
			a[i][j] = max(max(a[i-2][j] + a[i][j-1] - a[i-2][j-1], a[i][j-2] + a[i-1][j] - a[i-1][j-2]) + 1, a[i][j]);
		}
	}

	printf("%d\n",a[m+1][n+1]);
	
	
	return 0;
}
