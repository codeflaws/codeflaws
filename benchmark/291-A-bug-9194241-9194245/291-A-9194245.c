#include<stdio.h>

int main(int argc, char *argv[])
{
	int sum = 0,j,count;
	int i,n,a[1000];
	scanf("%d",&n);
	for(i = 0 ; i < n ; i ++)
		scanf("%d",&a[i]);
	for(i = 0 ; i < n ; i ++)
	{
		count = 0;
		for(j = i ; j < n ; j ++)
			if(a[i] == a[j] && a[i] != 0)
				count++;
		if(count == 2)
			sum++;
		if(count > 2)
		{
			printf("-1\n");
			return 0;
		}
	}
	printf("%d\n",sum);
	return 0;
}