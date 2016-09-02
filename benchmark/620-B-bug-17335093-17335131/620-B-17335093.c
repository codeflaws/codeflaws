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

int a, b, i, x, ans, t[10] = {6, 2, 5, 5 ,4, 5 ,6, 3, 8, 6};

int main(int argc, char *argv[]) {
	scanf("%d %d",&a ,&b);
	FOR(i, a, b){
		x = i;
		while(x){
			ans += t[x%10];
			x/=10;
		}
	}
	printf("%d\n",ans);
	return 0;
}
