#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define lli long long int
#define MAX INT_MAX
#define PI acos(-1)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>b;i--)
#define buyuk(a,b) (a<b)? b:a
#define kucuk(a,b) (a<b)? a:b
#define ort(a,b) (a+b)/2
#define carp(a,b) (a)*(b)
int main(int argc, char *argv[]) {
	int i,j,l,t=0,m,a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);

	for(i=0;i<t;i++){
		for(j=0;j<t;j++)
			for(m=0;m<t;m++)
			if(a[i]+a[j]==a[m]){
				printf("%d %d %d",m+1,j+1,i+1);
					return 0;
			}
	}
	printf("-1");
}
