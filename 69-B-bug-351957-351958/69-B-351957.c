/* problem B */

#include<stdio.h>
#include<stdlib.h>

#define LIMIT 1000

int main(int argc, char *argv[])
{
int n,m,i,mintime,j,k;
int L[LIMIT]={0};
int R[LIMIT]={0};
int C[LIMIT]={0};
int T[LIMIT]={0};
long long int profit=0;


scanf("%d%d",&n,&m);
for(i=0;i<m;i++)
	{
	scanf("%d%d%d%d",&L[i],&R[i],&T[i],&C[i]);
	}

for(i=1;i<=n;i++)
	{
	mintime=1000000;
	j=0;k=-1;
	while(j<m)
		{
		if(L[j]<=i && R[j]>=i)
				{
				 if(T[j]<mintime)
					{
					k=j;
					mintime=T[j];
					}	
				}
		j++;

		}
	profit+=C[k];
	}


printf("mx profit is:%lld\n",profit);
return 0;
}

