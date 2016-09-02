#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,k,ele,counter=1,start=1,i;
	scanf("%d%d",&n,&k);
	int arr[n*k+1];
	for(i=0;i<=n*k;i++)
		arr[i]=0;
	for(i=0;i<k;i++)
	{
		scanf("%d",&ele);
		arr[ele]=i+1;
	}
	for(i=1;i<=n*k;i++)
	{
		if(counter==n)
		{
			counter=0;
			start++;
		}
		if(arr[i]==0)
		{
			arr[i]=start;
			counter++;
		}
	}

	start=1;
	int check=0,flag=0;

	for(i=1;i<=n*k;i++)
	{
		if(check==n)
		{
			flag=0;
			start++;
			check=0;
			i=0;
			printf("\n");
			if(start==k+1)
				break;
		}
		if(arr[i]==start)
		{
			if(flag==0)
			{
				printf("%d",i);
				flag=1;
			}
			else
				printf(" %d",i);
			check++;
		}
		if(start!=k+1 && i==n*k)
			i=0;
	}
	return 0;
}
