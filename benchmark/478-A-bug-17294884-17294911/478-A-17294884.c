#include<stdio.h>
int main(int argc, char *argv[])
{
	int a[5],i,s=0,k;
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	k=s/5;
	if (s%5==5 && k!=0) printf("%d",k);
	else printf("-1");
return 0;
}