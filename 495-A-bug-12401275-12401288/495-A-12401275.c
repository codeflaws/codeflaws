#include<stdio.h>
#include<string.h>
int pos(char n)
{
	if(n=='0')
	return 2;
	else if(n=='1')
	return 7;
	else if(n=='2')
	return 2;
	else if(n=='3')
	return 3;
	else if(n=='4')
	return 3;
	else if(n=='6')
	return 2;
	else if(n=='7')
	return 5;
	else if(n=='8')
	return 1;
	else if(n=='9')
	return 2;
}
int main(int argc, char *argv[])
{
	char a[3];
	scanf("%s",a);
	printf("%d",pos(a[0])*pos(a[1]));
	return 0;
}
