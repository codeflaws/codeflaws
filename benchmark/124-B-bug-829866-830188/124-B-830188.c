#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int result =1000000000;
int max(char* a[],int n)
{
	int max=atoi(a[0]);
	int i;
	for(i=1;i<n;i++)
		if(atoi(a[i])>max) 
			max = atoi(a[i]);
	return max;
}

int min(char* a[],int n)
{
	int min=atoi(a[0]);
	int i;
	for(i=1;i<n;i++)
		if(atoi(a[i])<min) 
			min = atoi(a[i]);
	return min;
}

void swap(char* a, char* b) {
	char c = *a;
	*a = *b;
	*b = c;
}

void compute(char* a[], int n) 
{
	int i;
	int maxx=max(a,n);
	int minn=min(a,n);
	//printf("%d %d\n",maxx, minn);
	if(maxx-minn<result)
		result = maxx-minn;
	
}

void process(char* a[], int n, int k, int s) 
{
	int i,max,min,j;
	if (s == k-1)
	{
		compute(a,n);
	}
	else
	{
		for (i=s; i<k; i++) 
		{
			for(j=0;j<n;j++)
				swap(&(a[j][s]), &(a[j][i]));
			process(a, n,k,s+1);
			for(j=0;j<n;j++)
				swap(&(a[j][s]), &(a[j][i]));
		}
	}
}  
int main(int argc, char *argv[])
{
	int n, k, i;
	char* a[10];
	scanf("%d %d\n",&n, &k);
	for(i=0;i<n;i++)
	{
		a[i]=(char*)malloc((k+2)*sizeof(char));
		gets(a[i]);
		//puts(a[i]);
	}
	process(a,n,k,0);
	for(i=0;i<n;i++)
	{
		free(a[i]);
	}
	printf("%d\n",result);
	return 0;
}