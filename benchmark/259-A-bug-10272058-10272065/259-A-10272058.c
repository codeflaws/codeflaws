#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char str[8][9];
	int i, j, flag = 0;
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			scanf(" %c", &str[i][j]);
			if((j!=0 && str[i][j-1] == str[i][j]))
				flag = 1;
			printf("%d %d\n", i, j);
		}
	}
	if(flag)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
