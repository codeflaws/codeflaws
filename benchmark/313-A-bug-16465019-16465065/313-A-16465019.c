#include<stdio.h>
int main(int argc, char *argv[]) { 
	int a,i,j,k;
	scanf("%d",&a);
	k=a%10;
	j=a/10%10;
	if(a>0)
		printf("%d",a);
	else 
	{
		if(k>j)
			printf("%d",a/100*10*k);
		
		else printf("%d",a/10);

	}
	return 0;
}


