#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j;char a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		j=0;
		while(a[j]!='\0')
		j++;
		if(j>10)
		printf("%c%d%c",a[0],j-2,a[j-1]);
		else
		printf("%s\n",a);
	}
	return 0;
}
