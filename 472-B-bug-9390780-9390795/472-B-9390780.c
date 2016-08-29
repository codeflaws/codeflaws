#include<stdio.h>
int main(int argc, char *argv[])
{

	int i,k,n,res;
	int f[2000];
	int d[2000]={0};

	res=0;
	
	scanf("%d %d",&n,&k);
	i=0;
	while(i<n)
	{
		scanf("%d",&f[i]);
		d[f[i]-1]++;
		i++;
	}
	for(i=1;i<2000;i++)
	{
		if(n/k==0&&n%k==0)
		{
			res=res+i-1;
			break;
		}
		else
		{
			if(n/k>1&&n%k!=0)
			{
				res=res+(n/k-1)*2+1+2;
			}
			if(n/k>1&&n%k==0)
			{
				res=res+(n/k-1)*2+1;
			}
			if(n/k==1&&n%k!=0)
			{
				res=res+1+2;
			}
			if(n/k==1&&n%k==0)
			{
				res=res+1;
			}
			if(n/k==0&&n%k!=0)
			{
				res=res+1;
			}
			n=n-d[i];
		}
	}
	printf("%d",res);
	

	return 0;
}

/*void paixu(int * p,int num)
{
	int x,m,temp;
	for(x=0;x<num-1;x++)
	{
		for(m=1;m<num-x;m++)
		{
			if(p[m-1]>p[m])
			{
				temp=p[m-1];
				p[m-1]=p[m];
				p[m]=temp;
			}
		}
	}	
}
*/