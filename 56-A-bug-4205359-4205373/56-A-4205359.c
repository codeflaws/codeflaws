#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int compare(char s[10000])
{
	if(strcmp(s,"ABSINTH")==0 || strcmp(s,"BEER")==0 || strcmp(s, "BRANDY")==0 || strcmp(s, "CHAMPAGNE")==0||  strcmp(s,"GIN")==0 ||  strcmp(s," RUM")==0 ||  strcmp(s, "SAKE")==0 ||  strcmp(s, "TEQUILA")==0 ||  strcmp(s,"VODKA")==0 ||  strcmp(s,"WHISKEY")==0 ||  strcmp(s,"WINE")==0)
		return 1;
	return 0;
}
int main(int argc, char *argv[])
{
	int n,i,count=0,i1;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		char s[10000];
		scanf("%s",s);
		int r= compare(s);
		int num =atoi(s);
				     
		if(r==1)
		{
			count++;
		}
		else if (num!=0)
		{
			if(num<18)
				count++;

		}
		else 
		{
			if(strcmp(s,"0")==0)
				count++;
		}

		

	
	}
		printf("%d\n",count);
		return 0;

}

