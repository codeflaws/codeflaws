#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<ctype.h>

#define MAX( a, b ) ( ( a > b) ? a : b ) 
#define MIN( a, b ) ( ( a < b) ? a : b )
#define FOR(ii,aa,bb) for(ii=aa;ii<bb;ii++)
#define and &&
#define or ||
int a[100000],f=0;
void sort(int bas,int ort,int son){
  int s=0,m,b,temp[1000000],i;
  b=bas;
  m=ort+1;
  f=1;
  while((b<=ort) && (m<=son))
    if(a[b]<a[m])
    temp[s++] = a[b++];
    else
    temp[s++] = a[m++];
  while((b<=ort))
   temp[s++] = a[b++];
  while((m<=son))
    temp[s++] = a[m++];
  for(i=0; i<s; i++)
    a[bas+i] = temp[i];
}


void merg(int bas,int son){
  if(son<=bas)
  return;
  int ort=(bas+son)/2;
  merg(bas,ort);
  merg(ort+1,son);
  sort(bas,ort,son);}
int main(int argc, char *argv[]) {

long long int x=0,s=0,i,j,n;
scanf("%lld",&n);
FOR(i,0,n)
  scanf("%d",&a[i]);
merg(0,n-1);
FOR(i,0,n){
	if(x<=a[i])
		s++;
	x+=a[i];}
printf("%lld",s);
return 0;
}      
