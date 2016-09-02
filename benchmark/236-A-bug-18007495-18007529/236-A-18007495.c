#include<stdio.h>
int main(int argc, char *argv[])
{
	char a[110];
	int i,j,l,k=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	for(j=i+1;j<l;j++)
	if(a[i]==a[j])
	{
	k++;
	break;
	}
	printf("%d",k);
	if((l-k)%2==0)
	printf("CHAT WITH HER!");
	else
	printf("IGNORE HIM!");
	return 0;
}
