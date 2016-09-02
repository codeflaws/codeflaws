
#include<stdio.h>

int main(int argc, char *argv[])
{
	int d1,d2;
	char s1[100],s2[100],s3[100];
	
	scanf("%s%s%s",s1,s2,s3);
	
	if(s2[0]=='T')
		d1=10;
	else if(s2[0]=='J')
		d1=11;
	else if(s2[0]=='Q')
		d1=12;
	else if(s2[0]=='K')
		d1=13;
	else if(s2[0]=='A')
		d1=14;
	else
		d1=s2[0]-'0';
	
	
	if(s3[0]=='T')
		d2=10;
	else if(s3[0]=='J')
		d2=11;
	else if(s3[0]=='Q')
		d2=12;
	else if(s3[0]=='K')
		d2=13;
	else if(s3[0]=='A')
		d2=14;
	else
		d2=s3[0]-'0';
	
	
	if(s2[1]==s3[1]&&d1>d2)
		printf("YES");
	
	else if(s2[1]==s1[0]&&s1[0]!=s3[0])
		printf("YES");
	
	else
		printf("NO");
	
	return 0;
}