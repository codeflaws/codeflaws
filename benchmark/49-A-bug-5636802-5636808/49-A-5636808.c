#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i,a=2;
	char arr[105];
	gets(arr);
	while(arr[strlen(arr)-a]==' ')
		a++;
	if(arr[strlen(arr)-a]=='A' || arr[strlen(arr)-a]=='E' || arr[strlen(arr)-a]=='I' ||arr[strlen(arr)-a]=='O' ||arr[strlen(arr)-a]=='U' || arr[strlen(arr)-a]=='e' || arr[strlen(arr)-a]=='y' || arr[strlen(arr)-a]=='Y' ||arr[strlen(arr)-a]=='i' ||arr[strlen(arr)-a]=='o' ||arr[strlen(arr)-a]=='u' ||arr[strlen(arr)-a]=='a')
		printf("YES");
	else
		printf("NO");
	return 0;
}
