#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n,d,t[100]={0},i,j,sum=0;
	scanf("%d %d",&n,&d);
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
	}

	for(i=0;i<n;i++){
		sum+=t[i];
	}

	//printf("sum = %d\n",sum);
	
	j=(n-1)*2;
	sum+=(n-1)*10;
	//printf("j : %d \t sum : %d\n",j,sum);

	if(sum<d){
		do{
			++j;
			sum+=5;
		}
		while(sum<d-4);
		//printf("sum = %d\n",sum);
	}
	//printf("sum = %d\n",sum);
	else if(sum>d){
		printf("-1\n");
		exit(0);
	}
	printf("%d\n",j);
	return 0;

}