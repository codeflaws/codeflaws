#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>

#define PI 3.141592653589793
#define max(a,b) ((a < b) ? (b) : (a))
#define min(a,b) ((a > b) ? (b) : (a))
#define FOR(i,a,b) for(i = a ; i <= b ; i++)
#define ROF(i,a,b) for(i = a ; i >= b ; i--)
#define RAD(x) (((x)*PI)/180)
#define y1 y_1
#define endl printf("\n")
#define MAX 105

int i, u, k;
char s[MAX];

int main(int argc, char *argv[]) {
	scanf("%s",s);
	u = strlen(s);
	FOR(i, 0, u - 1){
		if(s[i] == 'd' && s[i + 1] == 'o' && s[i + 2] == 't' && i + 2 != u - 1 &&i != 0){
			s[i] = '.';
			s[i + 1] = '\0';
			s[i + 2] = '\0';
		}
		else if(s[i] == 'a' && s[i + 1] == 't' && i != 0 &&i + 1 != u - 1 && !k){
			s[i] = '@';
			s[i + 1] = '\0';
			k = 1;
		}
	}
	FOR(i, 0, u - 1)
		if(s[i])
			printf("%c",s[i]);
	return 0;
}
