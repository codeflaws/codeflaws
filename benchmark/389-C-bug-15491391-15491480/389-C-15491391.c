#include<stdio.h>

int main(int argc, char *argv[])
{
	int n;
	int num[103]={0};
	int i;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		int tmp;
		scanf("%d",&tmp);
		num[tmp]++;
	}

	int layer=0;
	int empty=0;
	for(i=0;i<=100;i++)
	{
		empty+=layer;
		if(num[i]<=empty)
			empty-=num[i];
		else
		{
			num[i]-=empty;
			empty=0;
			layer+=((num[i]-1)/(i+1))+1;
			empty=(i+1)-num[i]%(i+1);
		}
	}

	printf("%d\n",layer);

	return 0;
}
