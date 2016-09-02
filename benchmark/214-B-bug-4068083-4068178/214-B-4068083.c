#include<stdio.h>
#include<stdlib.h>
int num[100005];
int cmp(const void*a,const void*b)
{
	int *c,*d;
	c=(int *)a;
	d=(int *)b;
	return *c-*d;
}
int main(int argc, char *argv[])
{
	int n,i,sum=0,count=0,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	qsort(num,n,sizeof(int),cmp);
	if(num[0]!=0)
		printf("-1\n");
	else
	{
		for(i=0;i<n;i++)
			sum+=num[i];
		if(sum%3==0)
		{
			if(num[n-1]==0)
			{
				printf("0\n");
				goto m;
			}
			else
			{
				for(i=n-1;i>=0;i--)
					printf("%d",num[i]);
			    printf("\n");
			}
		}
		else
		{
			if(sum%3==1)
			{
				for(i=0;i<n-1;i++)
				{
					if(num[i]%3==1)
					{
						num[i]=-1;
						break;
					}
				}
				if(num[i]!=-1)
				{
					if(num[i-3]==0)
					{
						printf("0\n");
						goto m;
					}
					else
					{
					for(i=0;i<n&&count<2;i++)
						if(num[i]%3!=0)
						{
							num[i]=-1;
							count++;
						}
					}
				}
				if(num[n-2]==0)
				{
					printf("0\n");
					goto m;
				}
			}
			else
			{
				for(i=0;i<n;i++)
				{
					if(num[i]%3==2)
					{
						num[i]=-1;
						break;
					}
				}
                if(num[i]!=-1)
				{
					if(num[n-3]==0)
					{
						printf("0\n");
						goto m;
					}
					else
					{
					for(i=0;i<n&&count<2;i++)
						if(num[i]%3!=0)
						{
							num[i]=-1;
							count++;
						}
					}
				}
				if(num[n-2]==0)
				{
					printf("0\n");
					goto m;
				}
			}
			if(flag==0)
			{
			for(i=n-1;i>=0;i--)
				if(num[i]!=-1)
					printf("%d",num[i]);
			printf("\n");
			}
		}
	}
m:return 0;
}



