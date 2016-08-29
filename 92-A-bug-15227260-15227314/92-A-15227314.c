#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,m,c=0,d=0,e=0,i,o;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		c+=i;
	}
	d=(m%c);
	for(i=1;i<=n;i++)
	{
		e+=i;
		if(e>d)
		{
			o=(d-e+i);
			break;
		}
		else if(e==d)
		{
			o=0;
			break;
		}
	}
	printf("%d\n",o);
	return 0;
}

