#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,k,a[100],i,j,max=0,min=101;
	scanf(" %d%d",&n,&k);
	for (i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
		if (max<a[i]) max=a[i];
		if (min>a[i]) min=a[i];
	}
	if (max-min>=k)
		printf("NO");
	else
	{
		printf("YES\n");
		for (i=0;i<n;i++)
		{
			for (j=0;j<min;j++)
				printf("1 ");
			for (j=0;j<a[i]-min;j++)
				printf("%d ",j+1);
			printf("\n");
		}
	}
	return 0;
}