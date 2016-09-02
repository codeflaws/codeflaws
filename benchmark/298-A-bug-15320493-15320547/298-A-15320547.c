#include<stdio.h>
int main(int argc, char *argv[])
{
	int i=1,j,a,b,k,l,n,count1=0,count2=0;
	scanf("%d",&n);
	char arr[n];
	scanf("%s",arr);
	while(i<n)
	{
	    if(arr[i]=='R')
	    {
	    	if(count1==0)
	    	a=i;
	    	count1++;
		}
	else if(arr[i]=='L')
		{
			if(count2==0)
			b=i;
			count2++;
		}
		i++;
	}
	
	if(count2==0)
	{
		l=a+count1+1;
		printf("%d %d",++a,l);
	}
	else if(count1==0)
	{
		l=b+count2;
		printf("%d %d",l,b);
	}
	else
	{
		l=a+count1;
		printf("%d %d",++a,l);
	}
return 0;
}