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

long long int x=0,n=0,s=0,i,j,t;
	scanf("%lld %lld",&n,&x);
	FOR(i,0,n){
		scanf("%lld",&t);
		s+=t;}
	if(s>0){
	for(i=0;;i++){
			s-=x;
		if(s<=0){
			printf("%lld",i+1);
			return 0;}}}
	else{
		for(i=0;;i++){
			s+=x;
	if(s>=0){
		printf("%lld",i+1);
		return 0;}}}



	
	
	
	
	return 0;
}
