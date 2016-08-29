#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int num;

	scanf("%d",&num);

	int *test = malloc(num * sizeof(int));

	int i;
	
	for(i = 0; i <= num-1; i++)
		scanf("%d",test+i);
	i = 0;
	while(i <= num)
	{
		if(*(test+i) == 1)
			break;
		else if(i == num-1)
		{
			printf("1");
			return 0;
		}
		i++;
	}


	int n = 0;
	i = 2;

	while(n <= num)
	{
		if(*(test+n) == i)
		{
			i++;
			n = 0;
			continue;
		}
		
		n += 1;
	}
	printf("%d",i);
	return 0;
}
