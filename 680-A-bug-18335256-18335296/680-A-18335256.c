#include <stdio.h>
int main(int argc, char *argv[])
{
	int a[5],c=0,i,j,t;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	if(a[0]==a[1]&&a[1]==a[2])
		c=a[3]+a[4];
	else if(a[0]==a[1]&&a[1]!=a[2])
	{
		if((a[2]+a[3]+a[4])>(a[1]+a[0]))
			c=a[0]+a[1];
		else 
			c=a[2]+a[3]+a[4];
	}
	else if(a[2]==a[3]&&a[3]==a[4])
		c=a[0]+a[1];
	else if(a[1]==a[2]&&a[2]==a[3])
		c=a[0]+a[4];
	else
	{
		for(i=0;i<5;i++)
			c+=a[i];
		for(i=1;i<4;i++)
		{
			if(a[i]==a[i+1])
			{
				c-=2*a[i];
                break;
			}
		}
	}
	printf("%d",c);
	return 0;
}