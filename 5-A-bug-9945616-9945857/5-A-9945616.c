#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int num=0,i,j,ps=0,len;	
	char str[105];
	while(scanf("%s",str)!=EOF)
	{
		if(str[0]=='+')
		{
			ps++;
			continue;
		}
		else if(str[0]=='-')
		{
			ps--;
			continue;
		}
		else
		{
			len=strlen(str);
			for(i=0;i<len;i++)
				if(str[i]==':')
					break;
			j=len-i-1;
			num+=j*ps;
		}
	}
	printf("%d\n",num);
	return 0;
}
