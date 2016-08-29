/*It is a neew Code but codeforces id not understanding it!!WTF!*/
#include<stdio.h>
#include<string.h>
int store;
void func(char s[])
{
	int i;
	int bit=0;
	for(i=0;i<strlen(s);i++)
	{
			putchar(s[i]);
			if(bit==1&&i<store)
			{
				putchar(',');
				bit=0;
			}
			if(s[i]=='@')
			{
				bit=1;
			}
	}
	putchar('\n');
}
int main(int argc, char *argv[])
{
	char s[10000];
	scanf("%s",s);
	int initial=0;
	int end=1;
	int state=1;
	int bit=0;
	int set,i;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!='@')
			set=0;
		else
			set=1;
		if(set==0)
		{
				if(bit!=0)
				end++;
				else
				initial++;
		}
		else
		{
			 store=i;
			if(bit==1)
			{
				initial=end-1;
				bit++;
			}
			if(bit==0)
			{
				bit=1;
			}
			if(initial<=0)
			{
				state=2;
			//	printf("i=%d\n",i);
				break;
			}
			else
			{
				initial=end-1;
				end=0;
			}
		}
		if(end==0&&i==strlen(s)-1)
			state=2;
			//	printf("%d %d\n",initial,end);
	}
	if(state==1&&strlen(s)>=3)
		func(s);
	else
		printf("No solution\n");
return 0;
}
