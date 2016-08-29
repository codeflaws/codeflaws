#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char s[81],s2[11][11],s3[11];
	scanf("%s",s);
	for (int i = 0;i < 10;i++) scanf(" %s",s2[i]);
	for (int i = 0;i < 8;i++) 
	{
		for (int j = 0;j < 10;j++) s3[j] = s[i * 10 + j];
		s3[10] = '\0';
		for (int j = 0;j < 10;j++)
		{
			if (strcmp(s3,s2[j]) == 0) 
			{
				printf("%d",j);
				break;
			}
		}
	}
	printf("\n");
	return 0;
}
