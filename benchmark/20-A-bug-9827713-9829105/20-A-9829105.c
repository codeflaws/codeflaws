#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char x[101];
	int i,a=0;
	gets(x);
	for(i=0;i<strlen(x)-1;i++)
	{
		if(x[i]!='/'||(x[i]=='/'&&x[i+1]!='/'))
		{
			printf("%c",x[i]);
			a=1;
		}
	}
	if(a!=1)
	printf("%c",x[0]);
	if(x[strlen(x)-1]!='/')
	printf("%c",x[strlen(x)-1]);
	return(0);
}
