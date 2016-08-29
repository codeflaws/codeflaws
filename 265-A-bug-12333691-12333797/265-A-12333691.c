#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i,j=0;
	char s[50];
	char t[50];
	scanf("%s",s);
	scanf("%s",t);
	char c=s[j];
	int x=strlen(t);
	int y=strlen(s);
	//printf("%d",x);
	for(i=0;i<x;i++)
	{
		if(c==t[i]&&i<y)
		{
			c=s[++j];
		}
	}
	printf("%d",j+1);
	return 0;
}
