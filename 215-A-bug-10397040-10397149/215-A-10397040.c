#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,m,max=0,i,j,max_c,t;
	int a[10000],b[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",(b+i));
	for(i=0;i<n;i++)
	{
		for(j=m-1;j>=0;j--)
		{
			if(!(b[j]%a[i]))
			{
				t=b[j]/a[i];
				if(t>max)
				{
					max=t;
					max_c=1;
				}
				else if(t==max)
					max_c++;
			}
			else if((b[j]/a[i])<max)
			{
				i=n;
				break;
			}
		}
	}
	printf("%d\n",max_c);
	return 0;
}
