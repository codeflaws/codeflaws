#include <stdio.h>
int main(int argc, char *argv[])
{	
	int n,a,b,i,sum;
	scanf("%d%d%d",&n,&a,&b);
	if(a==n-1)
	{
		if(n>1)
		puts("-1");
		else
		puts("1");
		return 0;
	}
	int t,prev=2,ctr=0;
	if(b)
	{
		t=1;
		prev=2;
		b--;
		printf("%d\n%d\n",t,t+1);
		t=2;
	}
	else
	{
		t=2;
		printf("%d\n",t-1);
	}
	for(i=3;i<=n;i++)
	{
		if(b>0)
		{
			sum=prev*2;
			printf("%d\n",sum);
			prev=sum;
			t=prev;
			b--;
		}
		else if(a>0)
		{
			printf("%d\n",t+1);
			t++;
			a--;
		}
		else
		printf("%d\n",t);
	}
	return 0;
}
