#include<stdio.h>

int main(int argc, char *argv[])
{
	int n,m,min;
	
	scanf("%d%d",&n,&m);
	
	if(n<m) min=n;
	else min=m;
	
	if(m%2==0) printf("Malvika");
	else printf("Akshat");
return 0;
}
