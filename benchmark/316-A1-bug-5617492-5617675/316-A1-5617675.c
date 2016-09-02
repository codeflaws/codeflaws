#include<stdio.h>
#include<string.h>
#define MAX 100000

int main(int argc, char *argv[])
{
	char hint[MAX], c ;
	int let_flag[10] = {0}, i, pos, n ;
	
	scanf(" %s",hint) ;

	n = 1 ;
	pos = 10 ;

	for(i=0;i<strlen(hint);++i)
	{
		c = hint[i] ;
		if((c>='A')&&(c<='J'))
		{
			if(let_flag[c-65]==0)
			{
				let_flag[c-65] = 1 ;
				if(i==0)
					n *= 9 ;
				else
					n *= pos ;
				pos-- ;
			}
		}
		else if(c=='?')
		{
			if(i==0)
				n *= 9 ;
			else
				n *= 10 ;
		}
	}

	printf("%d \n",n) ;

	return 0 ;
}


