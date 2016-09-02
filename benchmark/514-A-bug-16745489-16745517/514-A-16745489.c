#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define lli long long int
#define MAX INT_MAX
#define sd second
#define fs first
#define endll '\n'
#define PI acos(-1)
#define mp make_pair
#define pb push_back
#define best 1000000007
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>b;i--)
#define buyuk(a,b) (a<b)? b:a
#define kucuk(a,b) (a<b)? a:b
#define ort(a,b) (a+b)/2
#define carp(a,b) (a)*(b)
int main(int argc, char *argv[]){
	int i,j,t;
	char a[20];
	scanf("%s",a);
	if(a[0]!='9'){
	for(i=0;i<strlen(a);i++){
		if((a[i]-'0')>=5 && a[i]!='9')
			a[i]='9'-(a[i]-'0');
		}
	}
	else {
		for(i=1;i<strlen(a);i++){
				if((a[i]-'0')>=5)
					a[i]='9'-(a[i]-'0');
				a[0]=='9';
		}}
	for(i=0;i<strlen(a);i++)
		printf("%c",a[i]);
return 0;
}
