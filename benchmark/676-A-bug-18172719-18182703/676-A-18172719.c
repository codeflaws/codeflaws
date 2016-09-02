#include<stdio.h>
#include<math.h>

int maxi(int a,int b)
{
	if(a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main(int argc, char *argv[])
{
	int n,i,ans;
	scanf("%d",&n);
	int arry[n];
	int min=150,pmin;
	int max=-150,pmax;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arry[i]);
		if(arry[i]<min)
		{
			min=arry[i];
			pmin=i;
		}
		if(arry[i]>max)
		{
			max=arry[i];
			pmax=i;
		}
	
	}
	
	if(fabs(pmax-pmin)==n-1)
	{
		ans=n-1;
	}
	else 
	{
		ans=maxi((pmax-0,fabs(n-1-pmax)),(pmin-0,fabs(n-1-pmin)));
	}
	
	printf("%d\n",ans);

return(0);
}





