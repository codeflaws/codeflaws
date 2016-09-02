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
	int i,j,k;
	char arr[105];
	scanf("%s",arr);
	if(arr[0]=='A' && arr[1]=='X'){
		printf("NO");
	return 0;
	}
	if(arr[0]=='C' && arr[1]=='C'){
		printf("NO");
	return 0;
	}
	for(i=0;i<strlen(arr);i++)
			if(arr[i]=='C' && arr[strlen(arr)-1]=='S' && arr[strlen(arr)-2]=='E' && arr[strlen(arr)-3]=='C' && arr[strlen(arr)-4]=='R' && arr[strlen(arr)-5]=='O' && arr[strlen(arr)-6]=='F' && arr[strlen(arr)-7]=='E' && arr[strlen(arr)-8]=='D' && arr[strlen(arr)-9]=='O' ){
				printf("YES");
				return 0;
						}
				

				for(i=0;i<strlen(arr);i++)
					if(arr[i]=='C' && arr[i+1]=='O' && arr[strlen(arr)-1]=='S' && arr[strlen(arr)-2]=='E' && arr[strlen(arr)-3]=='C' && arr[strlen(arr)-4]=='R' && arr[strlen(arr)-5]=='O' && arr[strlen(arr)-6]=='F' && arr[strlen(arr)-7]=='E' && arr[strlen(arr)-8]=='D' ){
						printf("YES");
						return 0;
												
					}
					

				for(i=0;i<strlen(arr);i++)
					if(arr[i]=='C' && arr[i+1]=='O' && arr[i+2]=='D' && arr[strlen(arr)-1]=='S' && arr[strlen(arr)-2]=='E' && arr[strlen(arr)-3]=='C' && arr[strlen(arr)-4]=='R' && arr[strlen(arr)-5]=='O' && arr[strlen(arr)-6]=='F' && arr[strlen(arr)-7]=='E' ){
						printf("YES");
						        
						 return 0;                                         
						}
					

				for(i=0;i<strlen(arr);i++)
					if(arr[i]=='C' && arr[i+1]=='O' && arr[i+2]=='D' && arr[i+3]=='E' &&arr[strlen(arr)-1]=='S' && arr[strlen(arr)-2]=='E' && arr[strlen(arr)-3]=='C' && arr[strlen(arr)-4]=='R' && arr[strlen(arr)-5]=='O' && arr[strlen(arr)-6]=='F' ){
						printf("YES");                      
						       return 0;                      
						                                                
						}                           
					


				for(i=0;i<strlen(arr);i++)
					if(arr[i]=='C' && arr[i+1]=='O' && arr[i+2]=='D' && arr[i+3]=='E' && arr[i+4]=='F' &&arr[strlen(arr)-1]=='S' && arr[strlen(arr)-2]=='E' && arr[strlen(arr)-3]=='C' && arr[strlen(arr)-4]=='R' && arr[strlen(arr)-5]=='O'){
						printf("YES"); 
								     return 0;
						}

				for(i=0;i<strlen(arr);i++)
					if(arr[i]=='C' && arr[i+1]=='O' && arr[i+2]=='D' && arr[i+3]=='E' && arr[i+4]=='F' && arr[i+5]=='O' &&arr[strlen(arr)-1]=='S' && arr[strlen(arr)-2]=='E' && arr[strlen(arr)-3]=='C' && arr[strlen(arr)-4]=='R' ){
						printf("YES");                      
					                   return 0;
					}


				for(i=0;i<strlen(arr);i++)
					if(arr[i]=='C' && arr[i+1]=='O' && arr[i+2]=='D' && arr[i+3]=='E' && arr[i+4]=='F' && arr[i+5]=='O' && arr[i+6]=='R' &&arr[strlen(arr)-1]=='S' && arr[strlen(arr)-2]=='E' && arr[strlen(arr)-3]=='C'){
						printf("YES");
						return 0;
					}
					



				for(i=0;i<strlen(arr);i++)
					if(arr[i]=='C' && arr[i+1]=='O' && arr[i+2]=='D' && arr[i+3]=='E' && arr[i+4]=='F' && arr[i+5]=='O' && arr[i+6]=='R' &&arr[i+7]=='C' && arr[strlen(arr)-1]=='S' && arr[strlen(arr)-2]=='E' ){
						printf("YES");
						return 0;
					
						} 


				for(i=0;i<strlen(arr);i++)
					if(arr[i]=='C' && arr[i+1]=='O' && arr[i+2]=='D' && arr[i+3]=='E' && arr[i+4]=='F' && arr[i+5]=='O' && arr[i+6]=='R' &&arr[i+7]=='C' && arr[i+8]=='E' && arr[strlen(arr)-1]=='S' ) {
						printf("YES");
						return 0;
					}

						for(i=0;i<strlen(arr);i++)
							if(arr[i]=='C' && arr[i+1]=='O' && arr[i+2]=='D' && arr[i+3]=='E' && arr[i+4]=='F' && arr[i+5]=='O' && arr[i+6]=='R' &&arr[i+7]=='C' && arr[i+8]=='E' && arr[i+9]=='S' ) {
								printf("YES");
															return 0;}
						printf("NO");
					}








