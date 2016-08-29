#include <stdio.h>

int main(int argc, char *argv[])
{
	int i,j,t,n,x[8];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",x+i);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		if(x[i]>x[j])
		{
			t=x[i];x[i]=x[j];x[j]=t;
		}
	}
	if(n==0) printf("YES\n1\n2\n2\n3\n");
	else if(n==1) printf("YES\n%d\n%d\n%d\n",x[1],x[1],3*x[1]);
	else if(n==2) 
	{
		if(x[2]>3*x[1]) printf("NO\n");
		else printf("YES\n%d\n%d\n",x[1]*4-x[2],3*x[1]);
	}
	else if(n==3)
	{
		if(x[3]==3*x[1]) printf("YES\n%d\n",x[1]*4-x[2]);
		else if(x[2]+x[3]==4*x[1]) printf("YES\n%d\n",x[1]*3);
		else if(x[3]%3==0)
		{
			t=x[3]/3;
			if(x[2]+x[1]==4*t) printf("YES\n%d\n",t);
			else printf("NO\n");
		}	
		else printf("NO\n");
	}
	else if(n==4)
	{
		if(x[4]==3*x[1]&&x[2]+x[3]==4*x[1]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
