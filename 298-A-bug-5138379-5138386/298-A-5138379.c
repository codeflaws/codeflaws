#include <stdio.h>
#include <stdlib.h>

int end(char *c, int i, int flag)
{
	if(!flag)//search last L
	{
		for( ; *(c+i) != '.' ; i++)
			;
		return (i-1);
	}
	else
	{
		for( ; 1==1 ; i++)
		{
			if(*(c+i) == '.')
				return i;
			else if(*(c+i) == 'L')
				return i;
			else
				continue;
			}
	}
	return 0;
}

int main(int argc, char *argv[])
{
	char *c;
	int s,t,i,n;
	s = t = 0;
	scanf("%d",&n);
	do{
		c = malloc(sizeof(char)*n);
	}while(c);
	scanf("%s",c);
	for(i = 0 ; *(c+i) == '.' ; i++)
		;
	if(*(c+i) == 'L')
	{
		t = i-1;
		s = end(c, i, 0);
	}
	else
	{
		s = i;
		t = end(c, i, 1);
	}
	printf("%d %d", s+1, t+1);
	free(c);
	return 0;
}
