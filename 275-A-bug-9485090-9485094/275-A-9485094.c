#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int A[5][5],i,j,temp;
	memset(A,0,25*sizeof(int));
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			scanf("%d",&A[i][j]);
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			temp=A[i][j]+A[i+1][j]+A[i-1][j]+A[i][j+1]+A[i][j-1];
			if(temp&1)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	return 0;
}