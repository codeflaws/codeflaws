#include<stdio.h>
int main(int argc, char *argv[])
{
	int k,l,m,n,d,i,a=0;
	scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
	for(i=0;i<d;i++)
	{
		if(k==1 || l==1 || m==1 || n==1)
		{
			printf("%d",d);
			return 0;
		}
		if(i%k==0) //&& i%l!=0 && i%m!=0 && i%n!=0)
		{
			a++;
		}
		if(i%l==0 && i%k!=0) //&& i%m!=0 && i%n!=0)
		{
			a++;
		}
		if(i%m==0 && i%k!=0 && i%l!=0) //&& i%n!=0)
		{
			a++;
		}
		if(i%n==0 && i%k!=0 && i%m!=0 && i%l!=0)
		{
			a++;
		}
	}
	printf("%d",a);
}