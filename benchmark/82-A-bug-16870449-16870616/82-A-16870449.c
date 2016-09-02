#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	long long int n,sum=0,i=1;
	//scanf("%I64d",&n);
	scanf("%lld",&n);
	i=1;
	while(1)
	{
		sum=sum+ (5*i);
		
		if(sum>n)
		{
        break;
		}
		i*=2;
	}
	n=n-sum+ (5*i);
	long long int p=n%i;
	n=n/i;
	if(p!=0)
	   n=n+1;
	
	if(n==1)
	   printf("Sheldon\n");
	if(n==2)
	   printf("Leonard\n");
	if(n==3)
	   printf("Penny\n");
	 if(n==4)
	   printf("Rajesh\n");
	 if(n==5)
	   printf("Howard\n");
	   
	 return 0;  
}
