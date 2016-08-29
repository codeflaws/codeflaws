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

int i, u;
char s[15];

int main(int argc, char *argv[]) {
	scanf("%s",s);
	u = strlen(s);
	FOR(i, 0, u - 1){
		if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '4')
			i += 2;
		else if(s[i] == '1' && s[i + 1] == '4')
			i++;
		else if(s[i] != '1'){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
