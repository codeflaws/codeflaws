#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b) 
{ 
return *(int *)a-*(int *)b; 
} 
int main(int argc, char *argv[])
{
	int n,time,t[100],d[5000];
	int i,j,k=0;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		scanf("%d",&t[i]);
		scanf("%d",&time);
		qsort(t,i,sizeof(t[0]),cmp);
		for(j=i-1;j>=0;j--)
		{
			for(i=0;i<=j;i++)
			{
				if((t[j]-t[i])<=time)
				d[k++]=j-i+1;
			}
		}
		qsort(d,k,sizeof(d[0]),cmp);
		printf("%d\n",d[k-1]);
	}
	return 0;
}