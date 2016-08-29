#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char data[105];
		scanf("%s",data);
		if(strlen(data) >= 12)
		{
			printf("%c%d%c\n",data[0],strlen(data)-2,data[strlen(data)-1]);
		}
		else
		{
			printf("%s\n",data);
		}
	}
return 0;
}