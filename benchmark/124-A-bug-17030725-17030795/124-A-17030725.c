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

int x=0,n=0,s=0,i,j,a,b;
scanf("%d %d %d",&n,&a,&b);
FOR(i,1,n+1)
	if(a<i and b<=i)
		s++;
printf("%d",s);



	
	
	
	
	return 0;
}
