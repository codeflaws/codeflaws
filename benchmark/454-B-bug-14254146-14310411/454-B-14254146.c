#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a, const void * b)
{
	return *(int *)a - *(int *)b;
}
int main(int argc, char *argv[])
{
	int n,i,a[100000],ans,index,min,flag;
	scanf("%d",&n);
	min = 100001;
	flag = 0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i] < min)
		{
			min = a[i];
			index = i;
		}
	}
	for(i=index;i<n-1;i++)
	{
		if(a[i] > a[i+1])
		{
			flag = 1;
			printf("-1\n");
			break;
		}
	}
	if(flag == 0 && index != 0)
	{
		if(a[n-1] > a[0])
		{
			flag = 1;
			printf("-1\n");
		}
		if(flag == 0)
		{
			for(i=0;i<index-1;i++)
			{
				if(a[i] > a[i+1])
				{
					flag = 1;
					printf("-1\n");
				}
			}
		}
	}
	if(flag == 0)
	{
		if(index != 0)
		{
			ans = n-index;
			printf("%d\n",ans);
		}
		else
			printf("0\n");

	}
	return 0;
}
