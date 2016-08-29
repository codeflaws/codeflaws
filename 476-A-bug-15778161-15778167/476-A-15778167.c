#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,m,k;
	scanf("%d %d",&n,&m);
	k=(n+1)/2;
	while(k<=n)
	{
		if(k%m==0)
		break;
		else
		k++;}
		if(k==n+1)
		printf("-1");
		else 
		printf("%d",k);
	return 0;
}
