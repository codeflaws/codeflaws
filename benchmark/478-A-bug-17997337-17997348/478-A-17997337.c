#include<stdio.h>

int main(int argc, char *argv[])
{
	int a,sum=0,i;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a);
		sum+=a;
	}
	
	
	if(sum%5==0) printf("%d",sum/5);
	else printf("-1");
	
	
return 0;
}
