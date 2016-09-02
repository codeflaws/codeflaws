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

long long int r, x, y, xa, ya, fx ,fy, fmx, cvp;

int main(int argc, char *argv[]) {
	scanf("%lld %lld %lld %lld %lld",&r ,&x ,&y ,&xa ,&ya);
	fx = abs(x - xa);
	fy = abs(y - ya);
	double ans = sqrt(fx*fx + fy*fy);
	printf("%lld\n",(long long int)(ans/(2*r) + 0.9));
	return 0;
}
