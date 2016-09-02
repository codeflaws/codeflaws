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
int h[1000005];
int main(int argc, char *argv[]) {

long long int x=0,n=0,s=0,i,j,k;
	for(i=2; i<=1000000; i++)
		for(j=i*i; j<=1000000; j+=i)
			h[j] = 1;

scanf("%lld",&n);
FOR(i,0,n){
	scanf("%lld",&x);
	k=sqrt(x);
	if((k*k)==x && !h[k])
		printf("YES\n");
	else
		printf("NO\n");}
	



	
	
	
	
	return 0;
}
