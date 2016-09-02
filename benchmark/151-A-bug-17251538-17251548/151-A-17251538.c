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

int x=0,n=0,s=0,i,j,k,l,c,d,p,nl,np;
scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
printf("%d",MIN(MIN(((k*l)/n),c*d),p/np)/nl);



	
	
	
	
	return 0;
}
