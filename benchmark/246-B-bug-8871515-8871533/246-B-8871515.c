#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,j,k,count=0;
	scanf("%d", &i);
	for(j=0;j<i;j++)
	{
		scanf("%d", &k);
		count+=k;
	}
	if(count<0)
		count=count*(-1);
	//printf("%d\n", count%i);
	printf("%d\n", count%i!=0?count/i:i);
	return 0;
}
