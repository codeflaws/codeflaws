#include<stdio.h>
int a[100001];
int n;

void input()
{
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}

int compare(const void *a, const void *b)
{
	return ( *(int*)a - *(int*)b);
}

int main(int argc, char *argv[])
{
	int i;
	input();
	qsort(a,n,sizeof(int),compare);
	for(i=0;i<n-1;i++)
		if(a[i]*2 >a[i+1])
		{
			printf("YES");
			return 0;
		}
	printf("NO");
	return 0;
}