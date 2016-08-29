#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define lli long long int
#define MAX INT_MAX
#define sd second
#define fs first
#define endll '\n'
#define PI acos(-1)
#define mp make_pair
#define pb push_back
#define best 1000000007
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>b;i--)
#define buyuk(a,b) (a<b)? b:a
#define kucuk(a,b) (a<b)? a:b
#define ort(a,b) (a+b)/2
#define carp(a,b) (a)*(b)
int main(int argc, char *argv[]) {
	int i,j,t,x;
	char as[10],arr[13][13]={{"January"},{"February"},{"March"},{"April"},{"May"},{"June"},{"July"},{"August"},{"September"},{"October"},{"November"},{"December"}};
	scanf("%s %d",as,&x);
	if(as[6]=='y')
	t=1;
	if(as[0]=='F')
	t=2;
	if(as[2]=='r')
	t=3;
	if(as[1]=='p')
	t=4;
	if(as[2]=='y')
	t=5;
	if(as[1]=='u')
	t=6;
	if(as[2]=='l')
	t=7;
	if(as[2]=='g')
	t=8;
	if(as[3]=='t')
	t=9;
	if(as[0]=='O')
	t=10;
	if(as[0]=='N')
	t=11;
	if(as[0]=='D')
	t=12;

	printf("%s",arr[(x+t)%12-1]);
return 0;
}
	


	
