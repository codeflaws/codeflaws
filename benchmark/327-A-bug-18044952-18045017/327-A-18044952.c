#include <stdio.h>
int findOnes(int G[],int n){
	int counter=0,max_c=0,cur_st=0,fin_st=0,fin_en=0,cur_ones=0,max_ones=0,tot_ones=0;
	int i;
	for(i=0;i<n;i++){
		if(G[i]==0){
			counter--;
		} else {
			counter++;
			cur_ones++;
			tot_ones++;
		}
		if(counter<max_c){
			max_c=counter;
			max_ones = cur_ones;
			fin_st = cur_st;
			fin_en = i;
		} else if(counter > 0){
			counter = 0;
			cur_ones = 0;
			cur_st = i+1;
		}
	}
	return (fin_en - fin_st + 1 - max_ones + tot_ones - max_ones);
}
int main(int argc, char *argv[]) {
	int i,n,G[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&G[i]);
	}
	printf("%d\n",findOnes(G,n));
	return 0;
}
