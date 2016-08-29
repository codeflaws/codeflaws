#include <stdio.h>
int x,y,i,j,max;
int A[150][150];
int B[150];
int main(int argc, char *argv[])
{
	scanf("%d %d",&x,&y);
	for(i=1;i<=x;i++)
		B[i]=999999999;
	for(i=1;i<=x;i++)
		for(j=1;j<=y;j++)
		{
			scanf("%d",&A[i][j]);
			if(A[i][j]<B[i])
				B[i]=A[i][j];
		}
	for(i=1;i<=x;i++)
		if(B[i]>=max)
			max=B[i];
	printf("%d",max);
	return 0;
}
