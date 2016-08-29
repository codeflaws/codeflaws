#include<stdio.h>
int N,M,A,B;
char er[1000100];
int main(int argc, char *argv[])
{
	int i,j=1,t=1,s=0,a,b;
	scanf("%d %d %d %d",&N,&M,&A,&B);
	if(A<B)
	{
		for(i=A;i!=B;t++)
		{	
			if(s<t && M)
			{
				scanf("%d %d %d",&s,&a,&b);
				M--;
			}
			if(s==t)
				if(((i+1)<=b && (i+1)>=a) || i<=b && i>=a)
				{
					er[t]='X';
					continue;
				}
			i++;
			er[t]='R';
		}
	}
	else 
	{

		for(i=A;i!=B;t++)
		{
			if(s<t && M)
			{
				scanf("%d %d %d",&s,&a,&b);
				M--;
			}
			if(s==t)
				if((((i-1)<=b && (i-1)>=a) || i<=b && i>=a))
				{
					er[t]='X';
					continue;
				}
			i--;
			er[t]='L';
		}
	}


	while(M)
	{
		scanf("%d %d %d",&s,&a,&b);
		M--;
	}
	for(i=1;i<=t;i++)
		printf("%c",er[i]);

	return 0;
}
