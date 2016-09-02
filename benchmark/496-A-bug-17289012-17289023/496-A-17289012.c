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
int main(int argc, char *argv[]) {

int x=0,n=0,s=0,i,j,a[105],max=-500,min=500;
scanf("%d",&n);
FOR(i,1,n+1)
	scanf("%d",a+i);
s=2;
FOR(i,1,n-1){
	max=-500;
	FOR(j,2,n+1){
		if((s)==j)
			continue;
		if((j-1)!=s)
			max=MAX(a[j]-a[j-1],max);
		else
			max=MAX(a[j]-a[j-2],max);}
		s++;
		min=MIN(max,min);}
printf("%d",min);
		


	
	
	
	
	return 0;
}
