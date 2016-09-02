#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	char ch[101];
	gets(ch);
	int i,j,l=strlen(ch);
	for(i=0;i<l;i++)
	{
		ch[i]=tolower(ch[i]);
		if(ch[i]!='a'&&ch[i]!='e'&&ch[i]!='i'&&ch[i]!='o'&&ch[i]!='u')
			printf(".%c",ch[i]);
	}
return 0;
}