#include<stdio.h>

int b[100],a[1000006],u[100],ans[1000006];
int bit(int x)
{
	int c=1;
	while(1)
	{
		if(x%2==1)
		return c;
		c++;
		x=x/2;
	}
}
int main(int argc, char *argv[])
{
	int i,g,y,c=0,h,x,r,f=1;
	b[1]=1;
	for(i=2;i<20;i++)
	b[i]=b[i-1]*2;
	scanf("%d %d",&x,&y);
	while(x!=0)
	{
		if(y==0)
		{
			f=0;
			break;
		}
		r=bit(y);
		
		if(r>x)
		{
			y--;
		}
		else
		{
			a[c++]=y;
			x=x-r;
			y--;
		}
		//printf("%d %d %d\n",x,y,r);
	}
	if(f==0)
	printf("-1");
	else
	{
		printf("%d\n",c);
		for(i=0;i<c;i++)
		printf("%d ",a[i]);
	}
	return 0;
}
