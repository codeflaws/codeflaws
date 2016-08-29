#include<stdio.h>
int main(int argc, char *argv[])
{
	long long int n;
	int i;
	scanf("%lld",&n);
	int pow_two[] ={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192};
	int len=0;
	long long int cp =n;
	while(cp>0)
	{
		len++;
		cp=cp/10;
	}
	long long int out =0;
	for(i=0;i<len;i++)
	{
		out=out+pow_two[i];
		//printf("\n adding: %d",pow_two[i]);
	}
	for(i=0;i<len;i++)
	{
		int temp = n%10;
		n=n/10;
		if(temp==7)
			out=out+pow_two[i];
		
		//printf("\n adding: %d,%d",temp,pow_two[i]);
	}
	printf("%lld",out);

}