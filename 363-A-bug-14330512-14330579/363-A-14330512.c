#include <stdio.h>

int main(int argc, char *argv[]){
	int i,j,k,l,m;

	scanf("%d",&k);
	if(k==0)
		printf("O-|-OOOO\n");
	while(k!=0){
		i=k%10;
		if(i>5){
			printf("-O|");
			j=i-5;
		}
		else{
			printf("O-|");
			j=i;
		}
		for(m=0;m<j;m++)
			printf("O");
		printf("-");
		for(l=0;l<4-j;l++)
			printf("O");
		k/=10;
		printf("\n");
	}
	return 0;
}