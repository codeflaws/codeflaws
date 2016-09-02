#include<stdio.h>
#include<string.h>
#define ifdot(a)  (str[a]=='d' && str[a+1]=='o' && str[a+2]=='t')
#define ifat(a) 	(str[a]=='a' && str[a+1]=='t')
#define endl puts("");
char str[200];
int main(int argc, char *argv[])
{
	scanf("%s",str);
	int i,len=strlen(str),b=0;
	printf("%c",str[0]);
	for(i=1; i<len; i++)
	{
		if(ifdot(i) && i != len-3)
		{
			printf(".");
			i+=2;
			continue;
		}
		if (!b && ifat(i) && i != len-2)
		{
			printf("@");
			i++;
			continue;
		}
		printf("%c",str[i]);
	}
	endl;
	return 0;
}
