#include<stdio.h>
#include<string.h>
char stack[100001]={'\0'};
int top=-1;
push(char a)
{
	top++;
	stack[top]=a;
}
int pop()
{
	top=top-1;
	return stack[top+1];
}
int isempty()
{
	if(top==-1)
	return 1;
	else return 0;
}
int full()
{
	if(top==100000)
	return 1;
	else return 0;
}
int main(int argc, char *argv[])
{
	int n,i,c=0;
	char k;
	char ch[100001];
	scanf("%s",ch);
	n=strlen(ch);
	char *s=&ch[0];
	for(i=0;i<n;i++)
	{
		if(*(s+i)=='+')
		{
		if(!full())
		{
		if(top==-1)
		push('+');
		else
		{
			if(stack[top]=='+')
			k=pop();
		}
		}
		}
		else{ 
				if(!full())
			{
			if(top==-1)
			push('-');
			else
			{
				if(stack[top]=='-')
				k=pop();
			
			}
			}			
			}
	}
	if(c==0)
	if(isempty()) printf("Yes");
	else printf("No");
	return 0;
}

