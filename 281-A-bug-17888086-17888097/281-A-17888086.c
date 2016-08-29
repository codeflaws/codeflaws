#include <string.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	char string[100];
	gets(string);
	if(string[0]>=97 && string[0]<=122)
	string[0]-=32;
	printf("%s",string);
	return 0;
}
