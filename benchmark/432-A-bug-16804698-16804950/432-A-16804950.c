#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<ctype.h>

#define MAX( a, b ) ( ( a > b) ? a : b ) 
#define MIN( a, b ) ( ( a < b) ? a : b )
#define FOR(ii,aa,bb) for(ii=aa;ii<bb;ii++)
int main(int argc, char *argv[]) {

int x=0,n=0,s=0,i,j,cvp=0;
	scanf("%d %d",&n,&x);
	x=5-x;
	FOR(i,0,n){
		scanf("%d",&s);
		if(s<=x)
			cvp++;}
	printf("%d",cvp/3);




	
	
	
	
	return 0;
}
