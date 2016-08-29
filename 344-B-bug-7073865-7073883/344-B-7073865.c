#include<stdio.h>
int main(int argc, char *argv[])
{
	int a[3],i,j,temp,p,q,r,flag,num;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	num=a[0];
	flag=0;
	while(num>=0&&flag==0)
	{
		p=num;
		q=a[1]-num;
		r=a[0]-num;
		if(q+r==a[2])
		{
			flag=1;
			printf("%d %d %d\n",p,q,r);
		}
		num--;
	}
	if(flag==0)
	{
		printf("Impossible\n");
	}
	return 0;
}
