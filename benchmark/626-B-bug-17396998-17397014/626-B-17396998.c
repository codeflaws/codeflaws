#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i,j,n,r=0,g=0,b=0;
	scanf("%d",&n);
	char c[n+1];
	scanf("%s",c);
	for(i=0;i<=n;i++)
	{
		if(c[i]=='B')
			b++;
		else if(c[i]=='R')
			r++;
		else if(c[i]=='G')
			g++;
	}
	//printf("%d %d %d\n",r,g,b);
	if(b>0 && r>0 && g>0)
	{
		printf("BGR\n");
		return 0;
	}
	if((b==0 && r==0 && g>0) || (b==1 && r==1 && g==0))
	{
		printf("G\n");
		return 0; 
	}
	if((b>0 && r==0 && g==0)||(b==0 && r==1 && g==1))
	{
		printf("B\n");
		return 0;
	}
	if((b==0 && r>0 && g==0)||(b==1 && r==0 && g==1))
	{
		printf("R\n");
		return 0;
	}
	if(b==0 && r>1 && g>1)
	{
		printf("BGR\n");
		return 0;
	}
	if(b>1 && r==0 && g>1)
	{
		printf("BGR\n");
		return 0;
	}
	if(b>1 && r>1 && g==0)
	{
		printf("BGR\n");
		return 0;
	}
	if((b==1 && r>1 && g==0) || (b==0 && r>1 && g==1))
	{
		printf("BG\n");
		return 0;
	}
	if((b>1 && r==1 && g==0)||(b>1 && r==0 && g==0))
	{
		printf("GR\n");
		return 0;
	}
	if((b==1 && r==0 && g>1) || (b==0 && r==1 && g>1))
	{
		printf("BR\n");
		return 0;
	}
}