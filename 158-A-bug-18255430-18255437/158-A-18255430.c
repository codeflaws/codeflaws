#include <stdio.h>
int main(int argc, char *argv[])
{
	int count=0;
	int n,k;
	int data[105];
	scanf("%d %d",&n,&k);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<n; i++)
	{
		if(data[i] >= data[k] && data[i] != 0)
		{
			count++;
		}
	}
	printf("%d\n",count);
return 0;
}