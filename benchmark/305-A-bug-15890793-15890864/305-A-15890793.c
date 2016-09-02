#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j=0,k=0,l=0,count=0,m=0,a=0,b=0,c=0;
	scanf("%d",&n);
	int arr[n],arr1[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]==100)
		{
			if(a==0)
			{
			count++;
			a=1;
			arr1[j]=100;
			j++;
		    }
		}
		else if(arr[i]%10==0&&arr[i]!=100&&arr[i]!=0)
		{
			if(b==0)
			{
			count++;
			b=1;
			arr1[j]=arr[i];
			j++;
		    }
		}
		else if(arr[i]==0)
		{
			count++;
			arr1[j]=0;
			j++;
		}
		else 
		{
			if(arr[i]<10&&c==0)
			{
			count++;
			arr1[j]=arr[i];
			j++;
			c=1;
	    	}
		else if(arr[i]>10&&c==0)
		{
			k=arr[i];
		}
		
		}
	
	}
	if(b==0&&k!=0)
	{
		count++;
		printf("%d\n",count);
	for(m=0;m<j;m++)
	printf("%d ",arr1[m]);
	printf("%d",k);
	}
	else
	{
	printf("%d\n",count);
	for(m=0;m<j;m++)
	printf("%d ",arr1[m]);
}
return 0;
}