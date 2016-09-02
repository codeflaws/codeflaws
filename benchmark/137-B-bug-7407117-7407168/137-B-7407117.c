#include<stdio.h>
int ar[5005];
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		int d;
	scanf("%d",&d);
	ar[d]++;
	}
int 	s=0;
	for(i=1;i<=5001;i++)
	{
		if(ar[i]!=0)
		{
			s=s+ar[i]-1;
		}
	}
	printf("%d",s);
	return 0;
}		
