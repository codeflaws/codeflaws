

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int main(int argc, char *argv[]){
	int n = 0; //number of integers (distinct)
	int k = 0; //desired score
	scanf("%d %d", &n, &k);
	if(n==1){
		if(k==0){printf("%d\n", 1);}
		else{printf("%d\n", -1);}
	}
	if(n/2>k){
		printf("%d\n", -1);
		return 0;
	}
	int nums[n];
	int firstScore = (n-2)/2;
	int endScore = k-firstScore;
	int index = 0;
	while(index<(n-2-(n%2))){
		nums[index] = 2*endScore+1+index;
		index++;
	}
	nums[index] = endScore;
	index++;
	nums[index] = 2*endScore;
	index++;
	if(index<n)
		nums[index] = 2*endScore-1+index;
	index = 0;
	while(index<n){
		printf("%d ", nums[index]);
		index++;
	}
	printf("\n");

	return 0;
}