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
#define MAX 3010
void yap (int bas, int son, int a[]){int t[MAX]={0},yer=0,i,x=bas,y=(son+bas)/2+1,ort=(son+bas)/2;while(x<=ort&&y<=son)t[yer++]=(a[x]<a[y])?a[x++]:a[y++];while(x<=ort)t[yer++]=a[x++];while(y<=son)t[yer++]=a[y++];for(i=0;i<yer;i++)a[bas+i]=t[i];}void sort(int bas,int son,int a[]){int ort=(bas+son)/2;if(son==bas)return;sort(bas,ort,a);sort(ort+1,son,a);yap(bas,son,a);}
int n, i, a, cvp, h[MAX];

int main(int argc, char *argv[]) {
	scanf("%d",&n);
	FOR(i, 1, n){
		scanf("%d",&a);
		h[a]++;
	}
	FOR(i, 1, 2*n){
		if(h[i] > 1){
			h[i+1] += h[i] - 1;
			cvp += h[i] - 1;
			h[i] = 1;
		}
	}
	printf("%d\n",cvp);
	return 0;
}
