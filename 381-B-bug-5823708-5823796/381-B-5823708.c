#include<stdio.h>
int a[5005],i,c,n,num,max,min,t;
int main(int argc, char *argv[])
{	
	scanf("%d",&n);
	num = n;

	memset(a, 0, sizeof(a));
	max = 0; min = 5000;
	for (i = 1; i <= n; i++)
	{
		scanf("%d",&c);
		if (a[c]<2) a[c]++;
		else num--;
		max = max>c? max: c;
		min = min<c? min: c;
	}

	if (a[max] == 2) 
	{
		a[max]--;
		num--;
	}

	printf("%d\n",num);
	if (num == 1) 
	{
		printf("%d\n",min);
		return 0;
	}

	if (a[min] == 1) t=min+1;
	else t = min;
	for (i = t; i <= max; i++)
		if (a[i]) 
		{
			printf("%d ",i);
			a[i]--;
		}
	for (i = max; i > min; i--)
		if (a[i]) 
		{
			printf("%d ",i);
			a[i]--;
		}
	printf("%d\n",a[min]);

	return 0;
}

