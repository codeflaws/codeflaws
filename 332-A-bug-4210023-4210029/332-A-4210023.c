#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int N,i,L,Cnt=0;
	char Str[2001];
	scanf("%d %s",&N,Str);
	L=strlen(Str);
	for(i=N;i<L;i+=N)
	{
		if(Str[i-1]==Str[i-2]&&Str[i-1]==Str[i-3])
		{
			++Cnt;
		}
	}
	printf("%s\n",Cnt);
	return 0;
}
