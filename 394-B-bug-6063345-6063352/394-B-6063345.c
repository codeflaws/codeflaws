#include<stdio.h>
int x[5000000],y[5000000];
int main(int argc, char *argv[])
{
	int n,f,c,d=0,i,j,k;
	scanf("%d %d",&n,&f);
	for(i=0;i<10;i++)
	{
		for(j=0;j<n;j++)
		x[j]=0;
		x[n-1]=i;
		y[n-1]=(i*f)%10;
		c=(i*f)/10;
		for(j=n-2;j>=0;j--)
		{
			x[j]=y[j+1];
			k=x[j]*f+c;
			if(j!=0)
			y[j]=k%10;
			c=k/10;
		}
		if(x[n-1]==y[0] && x[n-1]!=0 && x[0]!=0)
		{
			for(j=0;j<n;j++)
			printf("%d",x[j]);
			d=1;
			break;
		}
	}
	if(d==0)
	printf("Impossible");
	return 0;
}
