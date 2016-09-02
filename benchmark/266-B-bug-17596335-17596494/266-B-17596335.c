#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int n,t,i,j;
	scanf("%d %d",&n,&t);
	char ch[n];
	scanf("%s",ch);
	//int l=strlen(ch);
	for(i=0;i<t;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(ch[j]=='B'&&(ch[j-1]=='G'||ch[j+1]=='G'))
			{
				ch[j]='G';
				ch[j+1]='B';
				j++;
			}
		}
	}
	printf("%s",ch);
return 0;
}