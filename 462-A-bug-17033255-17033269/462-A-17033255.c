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
int main(int argc, char *argv[]) {
	int i,j,x,t=0;
	char arr[105][105]={0};
	scanf("%d",&x);
	for(i=1;i<=x;i++)
		for(j=1;j<=x;j++)
			scanf(" %c",&arr[i][j]);
	for(i=1;i<=x;i++)
		for(j=1;j<=x;j++){
			if(arr[i+1][j]=='o')
				t++;
			if(arr[i][j+1]=='o')
				t++;
			if(arr[i-1][j]=='o')
				t++;
			if(arr[i][j-1]=='o')
				t++;
			if(t%2!=0){
				printf("N0");
			return 0;
			}
			t=0;
		}
	printf("YES");
}

