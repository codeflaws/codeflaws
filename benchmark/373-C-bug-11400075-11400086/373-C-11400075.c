#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main(int argc, char *argv[])
{
	int k,n,a[500004],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmpfunc);
	int j=n;
	int m=0;
	int c=0;
	if(n%2==0)
	{
		for(i=n/2;i<n;i++)
		{
			if(a[i]>=2*a[m])
			{
				m++;
				j--;
			}
		}
	}
	else
	{
		for(i=(n/2)+1;i<n;i++)
		{
			if(a[i]>=2*a[m])
			{
				m++;
				j--;
			}
		}
	}


	printf("%d\n",j);
	return 0;
}
