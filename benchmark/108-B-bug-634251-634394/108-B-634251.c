#include<stdio.h>
int che[1000000];
void mergesort(int arr[1000000],int t)
{
	if(t<=1)
		return;
	mergesort(arr,t/2);
	mergesort(&arr[t/2],t-t/2);
	int i=0,j=t/2,k=0;
	while(i<t)
	{
		if(j==t)
		{
			che[i]=arr[k];
			k++;
		}
		else if(k==t/2 || arr[k]>arr[j])
		{
			che[i]=arr[j];
			j++;
		}
		else 
		{
			che[i]=arr[k];
			k++;
		}
		i++;
	}
	i=0;
	while(i<t)
	{
		arr[i]=che[i];
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i,j,n,a,max1=0,max2=0,arr[100010];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	mergesort(arr,n);
	int flag=1;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]*2>arr[i+1])
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
