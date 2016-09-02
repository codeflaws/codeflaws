#include<stdio.h>
int main(int argc, char *argv[])
{
	int i,a,b,d[10]={0},j,digit,flag,x;
	scanf("%d",&a);
	for(i=a+1;i<=10000;i++)
	{
		flag=1;
		for(j=0;j<10;j++) d[j]=0;
		x=i;
		while(x!=0)
		{
			digit=x%10;
			if(d[digit]==0) {d[digit]=1;}
			else 
			{
				flag=0;
				break;
			}
			x=x/10;
		}
		if(flag) {printf("%d\n",i);return 0;}
	}
}
