#include <stdio.h>
#include <stdlib.h>

int MAX(int x, int y)
{
	return(x>y?x:y);	
}

int MIN(int p, int q)
{
	return(p<q?p:q);
}
	
int main(int argc, char *argv[])
{
	int a,b,a1,b1,a2,b2;
	scanf("%d%d%d%d%d%d", &a,&b,&a1,&b1,&a2,&b2);
	
	if(a1*b1+a2*b2>a*b)
	{
		printf("NO");
	}
	else
	{
		int c,d,c1,d1,c2,d2;
		c=MAX(a,b);		
		d=MIN(a,b);		
			
		c1=MAX(a1,b1);	
		d1=MIN(a1,b1);	
			
		c2=MAX(a2,b2);	
		d2=MIN(a2,b2);	
			
		if(c1<=c && c2<=c && d1<=d && d2<=d)
		{
			if(a1*b1+a2*b2==a*b)
			{
				printf("YES");
			}
			else
			{
				if((c1+c2<=c) || (c1+d2<=c && c2<=d) || (d1+d2<=d) || (d1+c2<=d)) 
				{
					printf("YES");
				}
				else if((c2+d1<=c && c1<=d) || (d1+d2<=c && c1<=d && c2<=d) || (d2+c1<=d) || (c1+c2<=d))
				{
					printf("YES");
				}
				else
				{
					printf("NO");
				}
			}
		}
		else
		{
			printf("NO");
		}
	}
	
	return 0;
}