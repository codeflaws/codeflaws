#include<stdio.h>

int main(int argc, char *argv[])
{
	int m,n,k,i,j,l;
	scanf("%d %d",&n,&m);
	if((m%2)!=0)
	{
		printf("%d\n",(m+1)/2);
		i=(m+1)/2-1;
		j=(m+1)/2+1;
		k=1;
		l=1;
	//	printf("%d %d\n",i,j);		
		while(k!=n)
		{
			if((k%m)==0)
			{
				i=(m+1)/2-1;
				j=(m+1)/2+1;
				l=1;
				printf("%d\n",(m+1)/2);
				k++;
			//	l++;
				continue;
			}
			if((l%2)!=0)
			{
				printf("%d\n",i);
				i--;
			}
			else
			{
				printf("%d\n",j);
				j++;
			}			
			k++;
			l++;
		}
	}
	else
	{
		i=m/2;
		j=(m/2)+1;
		k=1;
		while(k<=n)
		{
			if((k%m)==1)
			{
				i=(m/2);
				j=(m/2)+1;
			}
			if((k%2)==1)
			{
				printf("%d\n",i);
				i--;
			}
			else
			{
				printf("%d\n",j);
				j++;
			}
			k++;
		}
	}
	return 0;
}
