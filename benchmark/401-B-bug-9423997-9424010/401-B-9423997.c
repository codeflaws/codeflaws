#include<stdio.h>
int A[8001];
int main(int argc, char *argv[])
{
	int x,k,input[8001],i,num_rounds,a,b,min,max;
	min=0;
	max=0;
	scanf("%d%d",&x,&k);
	A[0]=1;
	i=1;
//	for(i=1;i<k+1;i++)
	if(k!=0)
	{
		while(k--)
	{
		scanf("%d",&num_rounds);
		if(num_rounds==1 )
		{
			scanf("%d%d",&input[i],&input[i+1]);
			a=input[i];
			b=input[i+1];
			A[a]=1;
			A[b]=1;
			i=i+2;
		}
		else
		{
			scanf("%d",&input[i]);
			a=input[i];
			A[a]=1;
			i++;
		}
	}
/*	for(i=0;i<x;i++)
	{
		printf("%d ",A[i]);
	} */
//	for(i=1;i<x-1;i++)
//	{
	i=1;
//	a=x-1;
	while(i<x)
	{
		if(A[i]==0)
			max++;
		if(A[i]==0 && A[i+1]==0 && i+1<x)
		{
			min++;
//			printf("%d i",i);
			max++;
			i=i+1;
		}
		i++;
	}
//	printf("%d max %d min\n",max,min);
	printf("%d %d\n",max-min,max);
	}
	else
	{
		max=x-1;
		min=(x+1)/2;
		printf("%d %d\n",min,max);
	}
	return 0;
}







