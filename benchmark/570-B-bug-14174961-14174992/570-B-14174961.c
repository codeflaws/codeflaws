#include<stdio.h>
int main(int argc, char *argv[]){
	long int n, m; scanf("%ld%ld", &n, &m);
	m <= n / 2 ? printf("%ld\n", m + 1) : printf("%ld\n", m - 1); return 0;
}