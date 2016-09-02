#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
	return (*(int *)a) - (*(int *)b);
}

int main(int argc, char *argv[])
{
	int n,k,i,a[100000];
	scanf("%d%d",&n,&k);	
	for(i = 0 ; i < n ; i ++)
		scanf("%d",&a[i]);
	if(n < k)
	{
		printf("-1\n");
		return 0;
	}
	qsort(a,n,sizeof(int),cmp);
	printf("%d %d\n",a[k-1],a[k-1]);
	return 0;
}