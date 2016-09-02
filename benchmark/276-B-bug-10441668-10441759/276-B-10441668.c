#include <stdio.h>

char s[1001];

int count[26] = {0};

int main(int argc, char *argv[])
{
	int i, odd_count = 0;;
	scanf("%s", s);
	for(i = 0; s[i]; i++)
	{
		count[s[i]-'a']++;
	}
	for(i = 0; i < 26; i++)
	{
		odd_count += (count[i] & 1);
	}
	if(odd_count & 1) puts("First");
	else puts("Second");
	return 0;
}
