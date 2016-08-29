#include<stdio.h>
void swa_p(int A[],int j,int i)
{
	int temp;
	temp=A[j];
	A[j]=A[i];
	A[i]=temp;
}
int main(int argc, char *argv[])
{
	int n,i,j,min,b=0,x,k;
	int A[3010];
	int B[3010],C[3010],count=0;


	scanf("%d",&n); //scans the number of elements


	for(i=0;i<n;i++) // scans the array
	{
		scanf("%d",&A[i]);
	}

	for(i=0;i<n;i++)
	{
		min=~1;
		for(j=i;j<n;j++)
		{
			if(min>A[j])
			{
				min=A[j];
				k=j;
			}
		}
		if(min<A[i])
		{
			swa_p(A,k,i); 
			count++;
			B[b]=k;
			C[b]=i;
			b++;
		}
	}
	printf("%d\n",count);
	for(x=0;x<count;x++)
//	while(count--)
	{
		printf("%d %d\n",B[x],C[x]);
	}
	return 0;
}
