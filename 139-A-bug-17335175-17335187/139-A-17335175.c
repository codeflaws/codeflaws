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
#define min(a,b) (a<b)? a:b
#define ort(a,b) (a+b)/2
#define carp(a,b) (a)*(b)
/*
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
   */
int main(int argc, char *argv[]) {
	int x,a[1005],i,j,top=0;
	scanf("%d",&x);
	for(i=0;i<7;i++)
		scanf("%d",&a[i]);
	for(j=1;j<=7;j++)
		for(i=0;i<7;i++){
			top+=a[i];
	if(top>=x){
		printf("%d",i+1);
	return 0;
	}
		}
}
