#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char s[1009];
	int c[30],i,j;
	for(i=0;i<27;i++)
	c[i]=0;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
		c[s[i]-97]++;
	j=0;
	for(i=0;i<26;i++)
	if(c[i]%2!=0)
	j++;
	if(j%2==0)
	printf("Second\n");
	else
	printf("First\n");
	return 0;
}
