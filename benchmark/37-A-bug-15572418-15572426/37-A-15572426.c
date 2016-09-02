#include <stdio.h>
int i,x,j,sayac=1,sayac2,max;
int A[100000];
int main(int argc, char *argv[])
{
	scanf("%d",&x);
	for (i = 1; i <=x ; i++)
		scanf("%d",&A[i]);
	
	for (i = 1; i <=x ; i++)
	{
		for (j = i+1; j <=x ; j++)
			if (A[i]==A[j] && A[i]!=0)
			{
				sayac++;
				A[j]=0;
			}
		
		if (sayac>max)
			max=sayac;
		
		sayac=1;
	}
	for (i = 1; i <=x ; i++)
		if (A[i]!=0)	
			sayac2++;
	
	printf("%d %d",max,sayac2);
	return 0;
}
