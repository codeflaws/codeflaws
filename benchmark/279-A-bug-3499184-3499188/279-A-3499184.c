#include <stdio.h>

typedef struct
{
	int x,y;
}Point_t ;
Point_t Now;

int main(int argc, char *argv[])
{
	int x,y,add,Res;
	scanf("%d %d",&x,&y);
	add=1;
	Now.x=Now.y=0;
	while(add)
	{
		if(add&1)
		{
			if(y==Now.y&&x>=Now.x&&x<=Now.x+add)
			{
				Res=((add-1)<<1)+1;
				break;
			}
			Now.x+=add;
			if(x==Now.x&&y>=Now.y&&y<=Now.y+add)
			{
				Res=add<<1;
				break;
			}
			Now.y+=add;
		}
		else
		{
			if(y==Now.y&&x>=Now.x-add&&x<=Now.x)
			{
				Res=((add-1)<<1)+1;
				break;
			}
			Now.x-=add;
			if(x==Now.x&&y>=Now.y-add&&y<=Now.y)
			{
				Res=add<<1;
				break;
			}
			Now.y-=add;
		}
		++add;
	}
	printf("%d\n",Res);
	return 0;
}
