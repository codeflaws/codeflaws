#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,x,y,i,s=0,n;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d %d",&x,&y);
		while(x && y)
		{
			if(x>=y && y!=0)
			{
				s+=x/y;
				x=x%y;
			}
			else if(y>x && x!=0)
			{
				s+=y/x;
				y=y%x;
			}
		}
		printf("%d",s);
		s=0;
	}
	return 0;
}
