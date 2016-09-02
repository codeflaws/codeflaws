#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char s[201];
	char r[201];
//	char w[4] = "WUB";
	scanf("%s", s);
	int i=0,j=0,l;
	l = strlen(s);
	while(i < (l-1))
	{
		if((s[i] == 'W') && (s[i+1] == 'U') && (s[i+2] == 'B'))
		{
			i=i+3;
			printf(" ");
		}
		else
		{
/*			if(j != 0)
			{
				printf(" ");
			}*/
			r[j] = s[i];
			printf("%c",s[i]); 
			j++;
			i++;

		}
//		r[j] = ' ';
//		j++;
//		printf("%d\n",i);
	}
//	for(i=0; i< 
	printf("\n");
return 0;
}
