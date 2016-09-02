#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;
	char a[100];
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U' || a[i]=='y' || a[i]=='Y')
		continue;
		if(a[i]>64 && a[i]<91)
		a[i]=a[i]+32;
		printf(".%c",*(a+i));
	}
	return 0;
}
