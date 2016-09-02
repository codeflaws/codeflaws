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
int _[MAX];void yap (int bas, int son, int a[]){int yer=0,i,x=bas,y=(son+bas)/2+1,ort=(son+bas)/2;while(x<=ort&&y<=son)_[yer++]=(a[x]<a[y])?a[x++]:a[y++];while(x<=ort)_[yer++]=a[x++];while(y<=son)_[yer++]=a[y++];for(i=0;i<yer;i++)a[bas+i]=_[i];}void sort(int bas,int son,int a[]){int ort=(bas+son)/2;if(son==bas)return;sort(bas,ort,a);sort(ort+1,son,a);yap(bas,son,a);}

int n, i, ans, top, t[MAX];

int main(int argc, char *argv[]) {
	scanf("%d",&n);
	FOR(i, 1, n)
		scanf("%d",&t[i]);
	sort(1, n, t);
	FOR(i, 1, n){
		if(top <= t[i])
			ans++;
		top += t[i];
	}
	printf("%d\n",ans);
	return 0;
}
