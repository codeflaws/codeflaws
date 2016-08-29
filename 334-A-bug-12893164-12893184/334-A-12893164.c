#include<stdio.h>

int main(int argc, char *argv[]){
	int n, i,count = 0,k,j;
	scanf("%d", &n);
	int sq = n * n;
	for(i = 1; i <= n*n/2; i = i + n/2)
	{
		//for(k = 1; k <= n; k++)
			for(j=i; j < i + n / 2; j++)
			{
				printf("%d %d ",j,sq-j+1);
			}
		printf("\n");
	}
	

}