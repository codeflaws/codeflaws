#include<stdio.h>
int main(int argc, char *argv[])
{
	char ch,a[1007];int i=1;
	a[0]='0';
	scanf("%c",&ch);
	while(ch!='\n'){
		if((ch=='/')&&a[i-1]=='/');
		else a[i++]=ch;
		scanf("%c",&ch);
	}
	a[i]='\0';
	for(i=1;a[i]!='\0';++i)printf("%c",a[i]);
	return 0;
}
