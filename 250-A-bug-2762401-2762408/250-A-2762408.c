#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int i, n, data[100], counter = 0, negative = 0, folders = 0, printed = 0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(i = 0; i < n; i++)
	{
		if(data[i] < 0)
		{
			negative++;
		}
	}
	folders = ceil(negative/2.0);
	if(folders != 0)
	{
		printf("%d\n",folders);
	}
	negative = 0;
	if(folders > 0)
	{
		for(i = 0; i < n; i++)
		{
			if(negative == 2 && folders > 1 && printed < folders-1)
			{
				printf("%d ",counter);
				negative = 0;
				counter = 0;
				printed++;
			}
			counter++;
			if(data[i] < 0)
			{
				negative++;
			}
		}
		printed++;
		if(folders == 1 || printed == folders)
		{
			printf("%d",counter);
		}
	}
	else if(folders == 0)
	{
		printf("1\n");
		for(i = 0; i < n; i++)
		{
			counter++;
		}
		printf("%d",counter);
	}
	return 0;
}
