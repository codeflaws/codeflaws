#include<stdio.h>
#include<stdlib.h>
long sum,lim,ans[10005],tot=0;
void add(long x)
{
	ans[++tot]=x;
}
int main(int argc, char *argv[])
{
	long i,j,k;
	scanf("%ld %ld",&sum,&lim);
	i=lim; j=k=0;
	while(i)
	{
		j+=(i-(i>>1))*(1<<k);
		i>>=1;
		k++;
	}
	if (j<sum) printf("-1");
	else
	{
		for (j=0;1<<j<=lim;j++);
		j=1<<j;
		k=j>>1;
		while(sum)
		{
			if (sum>=j>>1&&k<=lim)
			{
				add(k);
				sum-=j>>1;
				k+=j;
			}
			else
			{
				j>>=1;
				k=j>>1;
			}
		}
		printf("%ld\n",tot);
		for (i=1;i<=tot;i++) printf("%ld ",ans[i]);
	}
	return 0;
}
