#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define PI 3.141592653589793
#define max(a,b) (a < b) ? (b) : (a)
#define min(a,b) (a > b) ? (b) : (a)
#define FOR(i,a,b) for(i = a ; i <= b ; i++)
#define ROF(i,a,b) for(i = a ; i >= b ; i--)
#define RAD(x) ((x)*PI)/180
#define y1 y_1
#define ll long long
#define endl printf("\n")
#define MAX 105

int n, i, j, k, a[MAX];

int main(int argc, char *argv[]) {
	scanf("%d",&n);
	FOR(i,1,n)
		scanf("%d",&a[i]);
	FOR(i,1,n)
		FOR(j,1,n)
			FOR(k,1,n)
				if(a[i] == a[j] + a[k] && i != j && j != k && k != i){
					printf("%d %d %d",a[i] , a[j] , a[k]);
					return 0;
				}
	printf("-1");
	return 0;
}
