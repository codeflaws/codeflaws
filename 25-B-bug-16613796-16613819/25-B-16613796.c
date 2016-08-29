#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define FOR(ii,aa,bb) for(ii=aa;ii<=bb;ii++)


int main(int argc, char *argv[]) {
	int x,i;
	char arr[105];
	scanf("%d",&x);
		scanf("%s",arr);
	if(x<4){
		printf("%s",arr);
		return 0;}
		if(!(x%2)){
		for(i=0;i<x;i++){
			printf("%c",arr[i]);
		if(i%2)
			if(i!=x-1)
		printf("-");}
		printf("\n");}
	else {
		for(i=0;i<=x/2;i++){
			printf("%c",arr[i]);
			if(i%2)
					printf("-");}
			for(;i<x;i++)
				printf("%c",arr[i]);
	
	}


	
	
	
	return 0;
}
