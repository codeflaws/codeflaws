#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int n,i,j,k,arr[200000],f, start=0, end=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	f = 0;
	for(i=1;i<n;i++)
	{
		if(arr[i-1] > arr[i])
		{
			if(f == 0) start = i-1;
			if(f == 2) { printf("no\n"); return(0); }
			f = 1;
			end = i;
		}
		else
		{
			if(f==1) 
			{
				f = 2;
			}
			if(arr[start] > arr[i]) { printf("no\n"); return(0); } 
		}
	}
	if(arr[start-1] > arr[end] && start != 0) { printf("no\n"); return(0); }
	//		printf("start = %d end = %d\n",start, end);
	printf("yes\n");
	printf("%d %d\n",start+1, end+1);
	return(0);
}
