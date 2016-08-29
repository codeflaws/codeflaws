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
	int i,j,x,y,sa[105],t=0,top=0,a[105],arr[105],min=0,as[105];
int main(int argc, char *argv[]) {
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
	sa[i]=a[i];
	}
	
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(a[j] < a[min])
				min=j;
		}
		arr[t]=a[min];
				a[min]=10000;
			t++;
	}
		t=0;
	for(i=0;i<x;i++){
		top+=arr[i];
		if(top<=y){
			as[t]=arr[i];
		t++;
		}
		else 
		break;
	}
	printf("%d\n",t);
	for(j=0;j<t;j++){
		for(i=0;i<x;i++){
			if(as[j]==sa[i]){
				printf("%d ",i+1);
			break;
			}

		}
	}
return 0;
}




	


