#include<stdio.h>
#include<stdlib.h>
int func(const void *a, const void *b)
{
	return(*(int*)a - *(int*)b);
}
int main(int argc, char *argv[])
{
	int i,j,k,arr[13],sum = 0;
	scanf("%d",&k);
	for(i=0;i<12;i++) 
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	if(k == 0) { printf("0\n"); return(0); }
	if(sum < k) printf("-1\n");
	else if(sum == k) printf("12\n");
	else
	{
		sum = 0;
		j = 0;
		qsort(arr, 12, sizeof(int), func);
		for(i=11;i>=0;i--)
		{
			if(sum + arr[i] >= k)
			{
				j++;
				printf("%d\n",j);
				break;
			}
			j++;
			sum += arr[i];
		}
	}
	return(0);
}
