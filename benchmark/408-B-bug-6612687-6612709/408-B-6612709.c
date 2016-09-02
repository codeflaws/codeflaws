#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,j,a[26]={0},b[26]={0},sum=0,flag=0;
	char s1[1010],s2[1010];
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		a[s1[i]-97]++;
	}
	scanf("%s",s2);
	for(i=0;s2[i]!='\0';i++)
	{
		b[s2[i]-97]++;
	}
	
	for(i=0;i<26;i++)
	{
		if(a[i]>0&&b[i]>0)
		{
			if(a[i]>=b[i])
			{
				sum=sum+b[i];
			}
			else
			{
				sum=sum+a[i];
			}
		}
		else if(a[i]==0&&b[i]>0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",sum);
	}
	return 0;
}
