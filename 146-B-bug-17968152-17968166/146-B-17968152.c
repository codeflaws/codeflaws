#include <stdio.h>
#include <math.h>
int flag=0,b;
void mask(int c)
{
	int d=c,arr[100002],a[100002]={0};
	int i=1;
	int ans=0;
	while(d>0)
	{
		if(d%10==4 || d%10==7)
		{
			ans=ans+d%10*i;
			i=i*10;
		}
		d=d/10;
	}
	if(ans==b)
		flag=1;
}
int main(int argc, char *argv[])
{
	int a;
	int c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a;
	while(c!=b)
	{
		mask(c);
		if(flag==1)
		{
//			printf("%d\n",c);
			break;
		}
		c++;
	}
	if(flag==1)
	printf("%d\n",c);
	else
		printf("%d\n",b);
	return 0;
}
