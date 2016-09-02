#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,m,i,j,sum;
	scanf("%d%d",&a,&m);
	sum=a;
	int r,count=0,flag=0,c;
	c=m;
	while(c--)
	{
		r=a%m;
		a=a+r;
		if(r==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}







