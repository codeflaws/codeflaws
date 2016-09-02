#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int a,b;
	int i;
	int sum;
	int n;
	int sum1;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		sum = 0;
		sum1 = 1;
		for(i=1;i<=a;i++)
		{
			scanf("%d",&n);
			sum += n;
		}	
		sum = abs(sum);
		if(sum==0)
		{
			printf("0\n");
			continue;
		}
		if(sum<=b)
		{
			printf("1\n");
			continue;
		}
		while(1)
		{
			if(sum<=0)
				break;
			sum -= b;
			sum1 ++;	
		}
		printf("%d\n",sum1);
	}
	return 0;
}
