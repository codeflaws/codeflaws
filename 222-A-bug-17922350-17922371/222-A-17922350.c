#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,k,x[10001],s=0,i;
	
	scanf("%d %d",&n,&k);
	
	for(i=1;i<=n;scanf("%d",&x[i++]));
	
	for(i=1;i<=n;i++)
	{
		if(x[i]!=x[n])
		s=i;
	}
	
	if(s<k)
	{
		printf("%d\n",s);
	}
	else
	printf("-1\n");
	
	return 0;
	



return 0;
}
		


	