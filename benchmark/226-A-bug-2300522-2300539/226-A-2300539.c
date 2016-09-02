#include<stdio.h>
int power(int n,int x)
{
	long long ans=1,mult;
	mult=3;
	while(n)
	{
		if(n&1)ans=(ans*mult)%x;
		mult=(mult*mult)%x;
		n/=2;
	}
	if(ans)
	return (int)ans-1;
	else return x-1;
}
int main(int argc, char *argv[])
{
	int n,x,i;
//	long long ans=3;
	scanf("%d%d",&n,&x);

//	for(i=1;i<n;i++)
//		ans =(ans*3)%x;
	printf("%d",power(n,x));
	return 0;
}


