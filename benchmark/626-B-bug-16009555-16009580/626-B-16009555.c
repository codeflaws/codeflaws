#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,bcount=0,rcount=0,gcount=0;
	scanf("%d\n",&n);
	char c;
	while(n--)
	{
		scanf("%c",&c);
		if(c=='R')rcount++;
		else if(c == 'G')gcount++;
		else if(c == 'B')bcount++;
	}
	if(!rcount && !bcount){printf("G\n");return 0;}
	if(!gcount && !bcount){printf("R\n");return 0;}
	if(!rcount && !gcount){printf("B\n");return 0;}

	if(rcount && gcount && bcount){printf("BGR\n");return 0;}

	if(rcount == 1 && gcount == 1 && !bcount){printf("B\n");return 0;}
	if(rcount == 1 && bcount == 1 && !gcount){printf("G\n");return 0;}
	if(bcount == 1 && gcount == 1 && !rcount){printf("R\n");return 0;}

	if(rcount >= 1 && gcount == 1 && !bcount){printf("BG\n");return 0;}
	if(rcount >= 1 && bcount == 1 && !gcount){printf("BG\n");return 0;}
	if(bcount >= 1 && gcount == 1 && !rcount){printf("GR\n");return 0;}
	if(rcount == 1 && gcount >= 1 && !bcount){printf("BR\n");return 0;}
	if(rcount == 1 && bcount >= 1 && !gcount){printf("GR\n");return 0;}
	if(bcount == 1 && gcount >= 1 && !rcount){printf("BR\n");return 0;}

	return 0;
}
