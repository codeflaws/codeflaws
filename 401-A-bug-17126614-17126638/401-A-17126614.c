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
		int x,a,b,c,i,top=0;
			scanf("%d %d",&a,&x);
			for(i=1;i<=a;i++){
				scanf("%d",&c);
				top+=c;
			}
			if(top>0){
				for(i=1;i<=a;i++){
					top-=x;
					if(top<=0){
						printf("%d",i);
					return 0;
					}
				}
			}

			if(top<0){     
				for(i=1;i<=a;i++){
					top+=x;

					if(top>=0){
						printf("%d",i);
						return 0;
					}
				}

						}
}
