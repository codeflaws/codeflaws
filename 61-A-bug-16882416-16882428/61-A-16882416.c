#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char s[21],s1[21],s2[21];
	int i,j,k;
	gets(s);
	gets(s1);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==s1[i])
		{
			s2[i]='0';
		}
		else
			s2[i]='1';

	}
	s2[i]='\0';
	puts(s2);
//etch();
	return 0;
}
