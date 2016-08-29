#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lln(const char * line, char * output, int fours, int sevens)
{
	int i, digit ;
	
	if (*line == '\0')
	{
		*output = '\0' ;
		return ((fours + sevens) != 0) ;
	}
	
	digit = *line - '0' ;
			
	if (digit < 4 && fours)
	{	
		*output = '4' ;
		fours-- ;
		output++ ;
	}
	else if (digit == 4 && fours)
	{		
		*output = '4' ;
		
		if (lln(line + 1, output + 1, fours - 1, sevens))
		{
			if (sevens)
			{
				*output = '7' ;
				sevens-- ;
			}
			else
			{
				return 1 ;
			}
		}
		else
		{
			return 0 ;
		}
		
		output++ ;
	}
	else if (digit < 7 && sevens)
	{
		*output = '7' ;
		sevens-- ;
		output++ ;
	}
	else if (digit == 7 && sevens)
	{
		*output = '7' ;
		
		if (lln(line + 1, output + 1, fours, sevens - 1))
		{
			return 1 ;
		}
		else
		{
			return 0 ;
		}
	}
	else
	{
		return 1 ;
	}
	
	for (i = 0 ; i < fours ; i++)
	{
		*output = '4' ;
		output++ ;
	}
	
	for (i = 0 ; i < sevens ; i++)
	{
		*output = '7' ;
		output++ ;
	}
	
	*output = '\0' ;
	
	return 0 ;
}

int main(int argc, char *argv[])
{
	char line[32], result[32] ;
	int  i, len ;
	
	gets(line) ;
	
	len = strlen(line) ;
	
	if ((len & 1) || (line[0] > '7'))
	{
		len = (len & 1 ? (len + 1) / 2 : len / 2 + 1) ;
		
		for (i = 0 ; i < len ; i++)
		{
			printf("4") ;
		}
		
		for (i = 0 ; i < len ; i++)
		{
			printf("7") ;
		}
		
		printf("\n") ;
	}
	else
	{
		if (lln(line, result, len / 2, len / 2))
		{
			len = len / 2 + 1 ;
		
			for (i = 0 ; i < len ; i++)
			{
				printf("4") ;
			}
			
			for (i = 0 ; i < len ; i++)
			{
				printf("7") ;
			}
			
			printf("\n") ;
		}
		else
		{
			printf("%s\n", result) ;
		}
	}
	return 0 ;
}
