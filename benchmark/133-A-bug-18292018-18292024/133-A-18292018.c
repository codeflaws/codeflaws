#include "stdio.h"
#include "string.h"

int main(int argc, char *argv[]){

	int iter,len=0,count=0;
	char input[101],temp;
	
	scanf("%s",&input);
	len=strlen(input);
	for(iter=0;iter<len;iter++){
		temp = input[iter];
		if(temp=='H' || temp=='Q' || temp=='+' || temp=='9'){
			count++;
			break;
		}
	}
	if(count){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
