#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	char ch[8][8];
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
			scanf("%c",&ch[i][j]);
	}
	for(i=0;i<8;i++)
	{
		for(j=0;j<7;j++)
		{
			if(ch[i][j] == ch[i][j+1])
			{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}
