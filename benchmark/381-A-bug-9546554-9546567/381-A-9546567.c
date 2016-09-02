#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int total, time;
	int sere = 0, dima = 0;
	
	scanf("%d",&total);

	int *card = malloc(total * sizeof(int));

	int i;

	for(i = 0; i < total; i++)
		scanf("%d",card+i);

	int right = total-1, left = 0;

	for(time = 1; time <= total; time++)
	{
		if(card[right] > card[left])
		{
			if(time % 2 == 1)
				sere += card[right];
			else
				dima += card[right];
			right -= 1;
		}
		else
		{
			if(time % 2 == 1)
				sere += card[left];
			else
				dima += card[left];
			left += 1;
		}
	}

	printf("%d\t%d\n",sere,dima);
	return 0;
}
