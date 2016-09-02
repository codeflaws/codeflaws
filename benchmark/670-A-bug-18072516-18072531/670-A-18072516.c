#include <stdio.h>


int main(int argc, char *argv[]){
	unsigned int n;
	unsigned int min;
	unsigned int max;
	scanf("%u",&n);
	min=n/7*2;
	if(n%7>=2){
		max=2;
		if(n%7==6){
			min++;
		}
	}else{
		max=n%7;
	}
	printf("%u %u",min,min+max);
	
return 0;
}
