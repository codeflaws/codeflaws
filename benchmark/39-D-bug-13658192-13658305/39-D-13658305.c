#include<stdio.h>
int main(int argc, char *argv[])
{
	char a,b,c,d,e,f,ch;
	scanf("%c%c%c%c%c%c%c%c%c%c%c",&a,&ch,&b,&ch,&c,&ch,&d,&ch,&e,&ch,&f,&ch);
	if((a==d)||(b==e)||(c==f))printf("YES");
	else printf("NO");
	return 0;
}
