#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char s[6];
	scanf("%s",s);
	int x=(s[0]-'0')*10+(s[1]-'0'),z,f;
	int y=(s[3]-'0')*10+(s[4]-'0');	
		z=x/10;
		f=(x%10)*10+z;
		if(x==23&&y>=32)
		{
			printf("00:00");
			return 0;
		}
		if(f>y&&f<59)
		{
			printf("%02d:%02dl",x,f);
			return 0;
		}
		else 
		{
			while(1)
			{
				z=(x+1)/10;
				f=((x+1)%10)*10+z;
				if(f<59)
				{
					printf("%02d:%02d",x+1,f);
					break;
				}
				else
					x++;
			}
		}
	return 0;
}
