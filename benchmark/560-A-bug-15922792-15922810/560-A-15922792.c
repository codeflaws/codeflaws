#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	
	int i;
	int c;
	for(i=0;i<n;i++)
	{
		scanf("%d", &c);
		if(c==1)
		{
			printf("-1");
			break;
		}
	}
	if(i==n+1)
	printf("1");
	
	return 0;
}