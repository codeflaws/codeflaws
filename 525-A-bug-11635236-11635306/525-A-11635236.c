#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
	long int n;
	scanf("%ld",&n);
	char s[2*n - 2];
	scanf("%s",s);
	long int len = strlen(s);
	long int i;
	long int count = 0;
	long int a[26];
	for(i=0;i<26;i++)
		a[i]=0;
	for(i=0;i<len;i++)
	{
		if(i%2 == 0)
		{
			a[s[i] - 97]++;
		}
		else
		{
			if(a[s[i] - 65] == 0)
				count++;
		}
	}
	printf("%ld\n",count);
	return 0;
}