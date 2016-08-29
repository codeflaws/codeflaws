#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

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

long long int n, i, j, x, hash[1000005] = {1};

int main(int argc, char *argv[]) {
	for(i = 2 ; i <= 1000000 ; i++){
		if(hash[i])continue;
		for(j = 2*i ; j <= 1000000 ; j+=i)
			hash[j] = 1;
	}
	scanf("%lld",&n);
	FOR(i,1,n){
		scanf("%lld",&x);
		printf( ( (long long int)sqrt(x) == sqrt(x)&& !hash[(int)sqrt(x)] ) ? "YES\n" : "NO\n");
	}
	return 0;
}
