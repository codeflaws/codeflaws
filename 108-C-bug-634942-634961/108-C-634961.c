#include<stdio.h>
int n, p;
int tank[1001],tap[1001],d[1001];

void input()
{
	int i;
	int a,b,c;
	scanf("%d%d",&n,&p);
	//printf("%d %d\n",n,p);
	for(i=0;i<p;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		tank[b] = a;
		d[b] = c;
		//printf("%d\n",i);
	}
	for(i=1;i<=n;i++)
		if(d[i]==0) d[i]=1000000;
}

int min(int a, int b)
{
	if (a<=b) return a;
	else return b;
}
int  process()
{
	int i,j,count=0;
	if(p==0) return count;
	for(i=1;i<=n;i++)
	{
		j=i;
		while(tank[j]!=0)
		{
			if(tap[j]==0) tap[tank[j]] = j;
			else tap[tank[j]] = tap[j];
			d[tank[j]] = min(d[tank[j]], d[j]);
			j = tank[j];
			if(j==i) break;
		}
	}
	for(i=1;i<=n;i++)
		if(tank[i]==0 && tap[i]!=0) count ++;
	return count;
}

int main(int argc, char *argv[])
{
	int i, count;
	input();
	//printf("message");
	count = process();
	printf("%d\n",count);
	for(i=1;i<=n;i++)
		if(tank[i]==0 && tap[i]!=0)
			printf("%d %d %d\n", i, tap[i], d[i]);
	return 0;
}
