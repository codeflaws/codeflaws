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
#define max(a,b) (a<b)? b:a
#define min(a,b) (a<b)? a:b
#define ort(a,b) (a+b)/2
#define carp(a,b) (a)*(b)
/*int a[10005],temp[1005];
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
		sort(bas,ort,son);
}
*/
int main(int argc, char *argv[]) {
	int a,b,c,q=0,d,t=10000,k=1;
	scanf("%d %d",&a,&b);
	while(a--){
		scanf("%d %d",&c,&d);
		if(c<b && t>d && d>0)
			t=d;
		else if(c<=b && d==0 && (t<0||t==100000))
			t=0;}
	if(t==100000) 
			t=-1; 
		else if(t!=0)
				t=100-t;
				printf("%d",t);
}
