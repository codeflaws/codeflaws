#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,sum=1;
	scanf("%d", &n);
	for (i=1;i<n;i++)
	{
		sum= sum +i;
		if (sum<n){
		printf("%d ", sum);
		}
		else {
			sum=sum%n;
			printf("%d ", sum);
		}
	}
	return 0;
}