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

int x=0,n=0,s=0,i,j,a[1000000],a1[1000000],m;
scanf("%d %d %d %d",&x,&n,&s,&m);
FOR(i,0,x)
	scanf("%d",&a[i]);
FOR(i,0,n)
	scanf("%d",&a1[i]);
if(a[x-1]<a1[n-m])
	printf("YES");
else
	printf("NO");



	
	
	
	
	return 0;
}
