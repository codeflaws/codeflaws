#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<ctype.h>

#define MAX( a, b ) ( ( a > b) ? a : b ) 
#define MIN( a, b ) ( ( a < b) ? a : b )
#define FOR(ii,aa,bb) for(ii=aa;ii<bb;ii++)
int x=0,n=0,s=0,i,j,t;
int main(int argc, char *argv[]) {
		scanf("%d %d %d",&x,&n,&s);
		if(!x&&!n){
			printf("5");
				return 0;}
		if(!x){
			printf("No solution");
			return 0;}
		if(!n){
			printf("0");
			return 0;}

if(n<abs(x))
{
	if(!(n==x)){
		      printf("No solution");
					      return 0;}}
    

	t=n/x;
	int y=1;
	FOR(i,-100,1001){
		y=1;
		FOR(j,0,s)
			y*=i;
		if(y==t){
			if(s%2==0)
			printf("%d",abs(i));
			else
				printf("%d",i);
		return 0;}}
	printf("No solution");
	return 0;
}
