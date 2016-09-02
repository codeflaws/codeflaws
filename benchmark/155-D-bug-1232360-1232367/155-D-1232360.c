#include<stdio.h>
#include<stdlib.h>
#define MAX 100000
int arr[MAX+5];
int init(int *prime)
{
	int i,k,j;
	for(k=0,i=2;i<MAX+5;i++)
	{
		if(arr[i]==0)
		{
			prime[k++]=i;
			for(j=i*2;j<MAX+5;j=j+i)
				arr[j]=1;
		}
	}	
	return k;
}

//will prime factorize the number
// -1 : for conflict , 0: for 1 , >0 for others
int factorize(int val,int *prime,int limit,int *temp,int *conflict)
{
	int i,num=val,count,pcount;
	for(pcount=i=0;prime[i]*prime[i]<=num;i++)
	{
		if(num==1)
			break;
		count=0;
		while(num%prime[i]==0)
		{
			if(arr[prime[i]]!=0)
			{
				*conflict=arr[prime[i]];
				return -1;
			}
			num=num/prime[i];
			count=1;
		}
		if(count==1)
			temp[pcount++]=prime[i];
	}
	if(num>1)
	{
		if(arr[num]!=0)
		{
				*conflict=arr[num];
				return -1;
		}
		temp[pcount++]=num;
	}	
	return pcount;
}

int main(int argc, char *argv[])
{
	int num[MAX][5],temp[6],*count,conflict;
	int prime[10000],limit,n,m,val,pcount,i,j;
	char sign;
	limit=init(prime);
	scanf("%d %d",&n,&m);
	getchar();
	for(i=0;i<m;i++)
	{
		scanf("%c %d",&sign,&val);
		getchar();
		if(sign=='+')
		{
			if(count[val]==1)
				printf("Already on\n");	
			else
			{  
				pcount=factorize(val,prime,limit,temp,&conflict);
				if(pcount==-1)
				{
					printf("Conflict with %d\n",conflict);
				}
				else
				{
					printf("Success\n");		
					count[val]=1;
					for(j=0;j<pcount;j++)
					{
						num[val][j]=temp[j];
						arr[temp[j]]=val;	
					}
				}
			}
		}
		else
		{
			if(count[val]==0)
				printf("Already off\n");	
			else
			{
				printf("Success\n");
				count[val]=0;							
				for(j=0;num[val][j]>0;j++)
				{
					arr[num[val][j]]=0;	
					num[val][j]=0;
				}
			}
		}	
	}
	return 0;
}
