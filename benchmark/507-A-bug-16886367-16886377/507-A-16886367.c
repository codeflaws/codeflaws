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
int x=0,n=0,s=0,i,j,k,h[105]={0},a[105]={0},c[105]={0},y=0,top=0;
scanf("%d %d",&n,&k);
	FOR(i,0,n)
		scanf("%d",&c[i]);

	FOR(i,0,n)
				a[i] = i+1;
	FOR(i,0,n)
			FOR(j,1,n)
				if(c[j-1] > c[j]){
					s = c[j];
					c[j] = c[j-1];
					c[j-1] = s;
					s = a[j];
					a[j] = a[j-1];
					a[j-1] = s;
																																					}
	
	
		FOR(i,0,n){
			top+=c[i];
			if(top>k)
					break;}
				
	
		printf("%d\n",i);
		FOR(j,0,n)
				printf("%d ",a[j]);
							
		return 0;
		
}
