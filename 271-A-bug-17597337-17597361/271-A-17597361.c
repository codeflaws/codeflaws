#include<stdio.h>
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int a[4],i,j,k,l=0;
	for(i=n+1;i<=10000;i++)
	{
		l=0;
		k=i;
		while(k)
		{

			a[l]=k%10;
			l++;
			k=k/10;
		}
		if((a[0]!=a[1])&&(a[0]!=a[2])&&(a[0]!=a[3])&&(a[1]!=a[2])&&(a[1]!=a[3])&&(a[2]!=a[3]))
		{
			printf("%d",i);
			break;
		}
	}
return 0;
}