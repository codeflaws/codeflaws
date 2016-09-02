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
#define FOR(i,a,b) for(i=a;i<b;i++)
#define ROF(i,a,b) for(i=a;i>b;i--)
#define buyuk(a,b) (a<b)? b:a
#define kucuk(a,b) (a<b)? a:b
#define ort(a,b) (a+b)/2
#define carp(a,b) (a)*(b)
int main(int argc, char *argv[]) {
	int i,j,t,x,y,k=0,f=0,l=0;
	char arr[20][20];
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			scanf(" %c",&arr[i][j]);	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(arr[i][j]=='.')
				k++;}
		if(k==y){
			f++;
			for(t=0;t<y;t++)
				arr[i][t]='*';
		}


		k=0;
	}
	k=0;	
	for(i=0;i<y;i++){
		for(j=0;j<x;j++)
			if(arr[j][i]=='.' || arr[j][i] == '*')
				k++;
		//
	if(k == x){
			for(t=0;t<x;t++)
				arr[t][i]='*';}
		k=0;
		}
	


			
for(i=0;i<x;i++)
	for(j=0;j<y;j++)
			if(arr[i][j]=='*')
			l++;
			printf("%d",l);
			return 0;
}



