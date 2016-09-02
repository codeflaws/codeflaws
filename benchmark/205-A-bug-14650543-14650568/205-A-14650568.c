#include<stdio.h>
#include<stdlib.h>

int cmp(const void * a , const void *b)
{
	return (*(int*)a - *(int*)b);
}
int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int a[n];
	
	int k;
	for ( k = 0 ; k < n ; k++)
	{
		scanf("%d", &a[k]);
	}
	
	int b[n];
	for (k=0;k<n;k++)
	{
		b[k]=a[k];
	}
	
	qsort(a,n,sizeof(int),cmp);
	
	int ans = 0;
	
	if (a[0]==a[1])
		printf("Still Rozdil\n");
	else
	{
		int i;
		for ( i = 0 ; i < n ; i++)
		{
			if(a[0]==b[i])
			{
				ans = i+1;
				break;
			}
		}
	printf("%d\n",ans);
	}
	return 0;
}
			 
			 
			 
			 
			 
			 
			 
			 
			 
		
		
		
		
		
	