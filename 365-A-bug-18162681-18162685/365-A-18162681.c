#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,k,x,i,r,j;
	scanf("%d%d",&n,&k);
	int c=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		int hash[10]={};
		while(x>0)
		{
			r=x%10;
			x/=10;
			hash[r]=1;
		}
		if(x==0)
		{
			int flag=0;
			for(j=0;j<10;j++)
			{
				if(j<=k && (hash[j]==1))
					flag=1;
			}
			if(!flag)
				c+=1;
		}
	}
	printf("%d\n",c);
	return 0;
}