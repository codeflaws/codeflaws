#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char * in;
	const char s[2]=" ";
	gets(in);
	//printf("%s",in);
	char * token,* token1,* token2;
	token=strtok(in,s);
	token1=strtok(NULL,s);
	token2=strtok(NULL,s);
	//printf("%s %s %s",token,token1,token2);
	if(strcmp(token2,"week")==0)
	{
		int day=atoi(token);
		if(day==5 || day==6)
			printf("53");
		else
			printf("52");
	}
	else if(strcmp(token2,"month")==0)
	{
		int day1=atoi(token);
		if(day1==30)
			printf("11");
		else if(day1==31)
			printf("7");
		else
			printf("12");
	}
	return 0;
}
