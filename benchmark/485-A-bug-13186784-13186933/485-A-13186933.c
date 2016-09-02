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
		a=(a+r)%m;
		if(r==0)
		{
			flag=1;
			break;
		}
	//	printf("a=%d r=%d\n",a,r);
	}
	if(flag==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}







