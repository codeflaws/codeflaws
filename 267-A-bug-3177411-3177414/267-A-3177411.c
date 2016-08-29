#include<stdio.h>
int main(int argc, char *argv[])
{
	int x,y,n,i,s=0,t,fark;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&x,&y);
	while(x>0 && y>0)
	{
		s=0;
		if(x>y)
		{
			fark=x-y;
			t=fark/y;
			if(t==0)
				t=1;
			fark=(t)*y;
			s+=t;
			x-=fark;
		}
		else
		{
			
			fark=y-x;
			t=fark/x;
			if(t==0)
				t=1;
			fark=(t)*x;
			s+=t;
			y-=fark;
		}

	}
	printf("%d\n",s);
	}
	return 0;
}

