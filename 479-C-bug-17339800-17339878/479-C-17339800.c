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
#define MAX 5005

typedef struct yapi{
	long long int a, b;
}yapi;


yapi _[MAX];void yap (int bas, int son, yapi a[]){int yer=0,i,x=bas,y=(son+bas)/2+1,ort=(son+bas)/2;while(x<=ort&&y<=son)_[yer++]=(a[x].a<a[y].a)?a[x++]:a[y++];while(x<=ort)_[yer++]=a[x++];while(y<=son)_[yer++]=a[y++];for(i=0;i<yer;i++)a[bas+i]=_[i];}void sort(int bas,int son,yapi a[]){int ort=(bas+son)/2;if(son==bas)return;sort(bas,ort,a);sort(ort+1,son,a);yap(bas,son,a);}

yapi _a[MAX] = {0};void yapx (int bas, int son, yapi a[]){int yer=0,i,x=bas,y=(son+bas)/2+1,ort=(son+bas)/2;while(x<=ort&&y<=son)_a[yer++]=(a[x].b<a[y].b)?a[x++]:a[y++];while(x<=ort)_a[yer++]=a[x++];while(y<=son)_a[yer++]=a[y++];for(i=0;i<yer;i++)a[bas+i]=_a[i];}void sortx(int bas,int son,yapi a[]){int ort=(bas+son)/2;if(son==bas)return;sortx(bas,ort,a);sortx(ort+1,son,a);yapx(bas,son,a);}

long long int n, i, best;
yapi y[MAX];

int main(int argc, char *argv[]) {
	scanf("%lld",&n);
	FOR(i, 1, n)
		scanf("%lld %lld",&y[i].a ,&y[i].b);
	sortx(1, n, y);
	sort(1, n, y);
	FOR(i, 1, n)
		if(y[i].b >= best)
			best = y[i].b;
		else
			best = y[i].a;
	printf("%lld\n",best);
	return 0;
}
