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

int n,i,j;
int main(int argc, char *argv[]){
		scanf("%d",&n);
		if(n==2)	{
			printf("1\n1 ");
			return 0;}
		if(n==3) {
			printf("2\n1 3 ");
			return 0;}
		if(n==4) {
			printf("4\n3 1 4 2 ");
			return 0;}
		printf("%d",n);
		for(i=1;i<=n;i+=2)
			printf("%d ",i);
		for(i=2;i<=n;i+=2)
			printf("%d ",i);


	
	
	
	
	return 0;
}
