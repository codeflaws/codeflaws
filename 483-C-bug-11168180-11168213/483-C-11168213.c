#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("1");
	int cur=1,i;
	int tempk=k;
	int k1=k;
		while(k)
		{
			cur=cur+k;
			printf(" %d",cur);
			if(k<0)
				k++;
			else
				k--;
			k*=-1;
		}
	for(k=k1+2;k<=n;k++)
		printf(" %d",k);
	printf("\n");
	return 0;
}