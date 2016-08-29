#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,n,pos1,pos2,pos3,count=0,countl=0,countr=0;
	scanf("%d",&n);
	char str[1010];
	scanf("%s",str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='.')
		count++;
		else if(str[i]=='R')
		countr++;
		else if(str[i]=='L')
		countl++;
	}
//	for(i=0;i<n;i++)
//	printf("%c",str[i]);
//	printf("\n");
//	printf("%d %d %d\n",count,countl,countr);
	for(i=0;i<n;i++)
	{
		if(str[i]!='.')
		{
			pos1=i;
			break;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(str[i]!='.')
		{
			pos2=i;
			break;
		}
	}
//	printf("%d %d\n",pos1,pos2);
	if((countl==0)&&(countr!=0))
	{
		printf("%d %d",pos1+1,pos2+2);
		return 0;
	}
	if((countl!=0)&&(countr==0))
	{
		printf("%d %d",pos2+1,pos2);
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		if(str[i]=='L')
		{
			pos3=i;
			break;
		}
	}
//	printf("%d\n",pos3);
	printf("%d %d",pos1+1,pos3);
	return 0;
}