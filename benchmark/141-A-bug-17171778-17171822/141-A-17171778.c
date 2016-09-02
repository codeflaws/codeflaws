#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i;
	int flag=0;
	char a[100],b[100],c[100];
	int A[26]={0},B[26]={0};
	scanf("%s%s%s",a,b,c);
	for(i=0;i<strlen(a);i++)
		A[a[i]-'A']++;
	for(i=0;i<strlen(b);i++)
		A[b[i]-'A']++;
	for(i=0;i<strlen(c);i++)
		B[c[i]-'A']++;

	for(i=0;i<26;i++)
	{
		if(A[i]!=B[i])
		{
			flag=1;
		}
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}