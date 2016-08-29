#include <stdio.h>
#include <string.h>
int max(int x,int y)
{
	if(x<=y)
		return y;
	else
		return x;
}
int main(int argc, char *argv[])
{
	char str[100];
	scanf("%s",str);
	int i;
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]=='H' || str[i]=='Q' || str[i]=='9' || str[i]=='+')
		{
			printf("YES\n");
			break;
		}
	}
	if(str[i]==0)
		printf("NO\n");
	return 0;
}