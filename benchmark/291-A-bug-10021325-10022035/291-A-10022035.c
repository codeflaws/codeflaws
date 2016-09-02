#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,c=0, sec = 0;
	scanf("%d",&n);
	int k[n];
	for (i=0;i<n;i++)
		scanf("%d",&k[i]);
	for(i=0;i<n;i++)
	{
		if (!k[i])
			continue;
		
		for(j=i+1;j<n;j++)
		{
			if(k[i]==k[j] && !c)
			{
				sec++;
				c++;
			}
			else if(k[i]==k[j]&&c)
				goto p;
		}
	c=0;
	}

	p:if(i==n)
		printf("%d\n",sec);
	else
		printf("-1\n");
		 
	return 0;
}