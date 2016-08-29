#include <stdio.h>
int x;
int main(int argc, char *argv[])
{
	scanf("%d",&x);
	switch (x)
	{
		case 1:
			printf("2");
			break;
		case 2:
			printf("3");
			break;
		case 3:
			printf("1");
			break;
		case 4:
			printf("2");	
			break;
		case 5:
			printf("1");	
			break;	
	}
return 0;
}
