#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char ch[101],c;
	scanf("%c",&c);
	char a[30]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m','.','/'};
	scanf("%s",ch);
	int l=strlen(ch),i,j,k;
	for(i=0;i<l;i++)
	{

		for(k=0;k<30;k++)
		{
			//printf("%c\n",ch[k]);
			if(ch[i]==a[k]&&c=='R')
				printf("%c",a[k-1]);
			else if(ch[i]==a[k]&&c=='L')
				printf("%c",a[k+1]);
		}
	}
return 0;
}