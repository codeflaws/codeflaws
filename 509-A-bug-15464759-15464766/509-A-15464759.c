#include<stdio.h>
int main(int argc, char *argv[]){
	int n,a[15][15] = {{0},{0,1,1,1,1,1,1,1,1,1}},i,j,sayi;
	scanf("%d",&n);
	for(i = 2 ; i <= n ; i++)
		for(j = 1 ; j <= n ; j++)
			a[i][j] = a[i-1][j]+a[i][j-1];
	printf("%d",a[n][n]);
	return 0;
}
