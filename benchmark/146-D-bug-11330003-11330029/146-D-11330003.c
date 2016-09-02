#include<stdio.h>
#include<stdlib.h>
int c4,c7,c47,c74,i;
int main(int argc, char *argv[]){
	scanf("%d %d %d %d",&c4,&c7,&c47,&c74);
	int max = c47 > c74 ? c47 : c74;
	if(abs(c47-c74) > 1  || c4 < max || c7 < max){
		puts("-1");
		return 0;
	}
	if(c47 > c74){

		for(i=1;i<=c4-c74;i++)
			printf("4");
		for(i=1;i<=c74;i++)
			printf("74");
		for(i=1;i<=c7-c74;i++)
			printf("7");
	}
	else if(c47 < c74){
		
		printf("7");
		for(i=1;i<=c4-c47;i++)
			printf("4");
		
		for(i=1;i<=c47-1;i++)
			printf("74");
		
		for(i=1;i<=c7-c47;i++)
			printf("7");

		
	}
	
	else if(c47==c74){
		if(c4+c7 < c47 + c74 + 1){
			puts("-1");
			return 0;
		}
		
		c4--;
		for(i=1;i<=c4-c47;i++)
			printf("4");
		
		if(c4 == c47-1 && c7>1)
			printf("7"),c7--;

		for(i=1;i<=c47;i++)
			printf("47");
		for(i=1;i<=c7-c74;i++)
			printf("7");
		if(c4-c47 >= 0)
			printf("4");



	}
	return 0;
}
