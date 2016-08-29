#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define lli long long int
#define MAX INT_MAX
#define PI acos(-1)
#define FOR(ii,aa,bb) for(ii=aa;ii<=bb;ii++)
#define ROF(ii,aa,bb) for(ii=aa;ii>bb;ii--)
#define buyuk(a,b) (a<b)? b:a
#define kucuk(a,b) (a<b)? a:b
#define ort(a,b) (a+b)/2
#define carp(a,b) (a)*(b)
int temp[1005],a[1005];
void sort(int bas,int ort,int son){
int yer=bas,x=bas,y=ort+1,t,i;
while(x <= ort && y <= son){
if(a[x] < a[y]) temp[yer++]=a[x++];
else temp[yer++]=a[y++];}
while(x <= ort) temp[yer++]=a[x++];
while(y <= son) temp[yer++]=a[y++];
for(i=bas;i<=son;i++) a[i]=temp[i];}   
void merge(int bas,int son){
if(son <= bas)return;
int ort=(bas+son)/2;
merge(bas,ort);
merge(ort+1,son);
sort(bas,ort,son);}

int main(int argc, char *argv[]) {
	int i,j,k,t,x,y,a[105],max=0;
	scanf("%d %d",&x,&y);
	FOR(i,1,x)
		scanf("%d",a+i);
		FOR(i,1,x){
			t=a[i]-a[i+1]-y;
			if(t>max)
				max=t;
		}
			printf("%d",max);
		
	return 0;
}
