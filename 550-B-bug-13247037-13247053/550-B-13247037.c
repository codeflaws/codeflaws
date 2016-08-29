#include<stdio.h>

int solution[15];
int n,l,s,x;
int hard[15];
int count=0;

void backtrack(int k)
{
	if(k==n)
	{
		int i;
		int c=0;
		for(i=0;i<n;i++)
		{
			if(solution[i]!=0)
				c++;
		}
		if(c<2)
			return;

		int sum=0;
		int max=0,min=100000;
		for(i=0;i<n;i++)
		{
			if(solution[i]!=0)
			{	
				sum=sum+hard[i];
				if(min>hard[i])
					min=hard[i];
				if(max<hard[i])
					max=hard[i];
			}	
		}

		if(!(sum<=s && sum>=l))
			return;

		if(max-min<x)
			return;

		count++;
		return;
	}

	solution[k]=1;
	backtrack(k+1);
	solution[k]=0;
	backtrack(k+1);
	return;
}

int main(int argc, char *argv[])
{
	scanf("%d %d %d %d",&n,&l,&s,&x);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&hard[i]);

	backtrack(0);
	printf("%d\n",count);
	
	return 0;
}
