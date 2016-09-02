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
#define MAX 100005

int n, i, j, ans, a[MAX];

int main(int argc, char *argv[]) {
	scanf("%d",&n);
	FOR(i, 1, n)
		scanf("%d",&a[i]);
	FOR(i, 1, n)
		if(a[i])
			break;
	ROF(j, i - 1, 1)
		a[j] = 2;
	ROF(i, n, 1)
		if(a[i])
			break;
	FOR(j, i + 1, n)
		a[j] = 2;
	FOR(i, 1, n - 1)
		if(a[i] == 0 && a[i+1] == 0){
			a[i] = 2;
			a[i+1] = 2;
		}
	FOR(i, 1, n)
		if(a[i] != 2)
			ans++;
	printf("%d\n",ans);
	return 0;
}
