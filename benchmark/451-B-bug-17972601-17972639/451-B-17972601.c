#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	if(*(long int*)a - *(long int*)b < 0)
		return -1;
	if(*(long int*)a - *(long int*)b == 0)
		return 0;
	if(*(long int*)a - *(long int*)b > 0)
		return 1;
}
int main(int argc, char *argv[])
{
	long int f,r,flag=0,k,i,j,n,a[100000],arr[100000];
	scanf("%ld", &n);
	for(i=0; i<n; i++)
	{
		scanf("%ld", &a[i]);
		arr[i] = a[i];
	}
	qsort(arr, n, sizeof(long int), compare);
	//	printf("aaaa");
	i = 0;
	j = n-1;
	while((a[i] == arr[i])&&(i<n))
	{
		i++;
	}
//	printf("i=%ld\n", i);
	if(i == n)
	{
		printf("yes\n");
		printf("1 1\n");
	}
	else if(i != n)
	{
		while((a[j] != arr[i])&&(j>=0))
		{
			j--;
		}
		f = i;
		r = j;
		for(k=i; k<j; k++)
		{
			if(a[f] != arr[r])
			{
				printf("no\n");
				flag = 1;
				break;
			}
			f++;
			r--;
		}

		/*	printf("%ld %ld\n", i,j);
			f = i;
			r = j;
			for(k=i; k<j; k++)
			{
			if(a[k] < a[k+1])
			{
			printf("no\n");
			flag = 1;
			break;
			}
			}*/
		if(flag == 0)
		{
			printf("yes\n");
			printf("%ld %ld\n", r+1,f+1);
		}
	}
}




