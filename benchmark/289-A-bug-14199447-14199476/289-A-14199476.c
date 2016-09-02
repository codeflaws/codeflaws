#include<stdio.h>
int main(int argc, char *argv[])
{
	int set=0,n,k,i,l,r;
	scanf("%d",&n);
	scanf("%d",&k);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&l);
		scanf("%d",&r);
		set+=r-l+1;
	}
	if (!(set%k))
		printf("0");
	else printf("%d",k-set%k);
	return 0;
}
