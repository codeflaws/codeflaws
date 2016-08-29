#include <stdio.h>
#include <string.h>

int isFreda(char *str)
{
	int len = strlen(str) ;
	if(len>=5 && strncmp(str+len-5, "lala.", 5)==0)
		return 1 ;
	else
		return 0 ;
}

int isRainbow(char *str)
{
	if(strncmp(str, "miao.", 5)==0)
		return 1 ;
	else
		return 0 ;
}

int main(int argc, char *argv[])
{
	char output[4][30] = {"OMG>.< I don't know!","Freda's","Rainbow's","OMG>.< I don't know!"} ;
	int ans ;
	char str[110] ;
	int n, i ;
	
	scanf("%d\n", &n) ;
	for(i=0;i<n;i++)
	{
		gets(str) ;
		ans = 0 ;
		if(isFreda(str)==1)
			ans += 1 ;
		if(isRainbow(str)==1)
			ans += 2 ;
		printf("%s\n", output[ans]) ;	
	}
	
	return 0 ;
}

