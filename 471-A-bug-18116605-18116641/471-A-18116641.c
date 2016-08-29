#include<stdio.h>

int main(int argc, char *argv[])
{

	int m[9],i,a,b;
	
	for(i=0;i<9;i++) m[i]=0;
	
	for(i=0;i<6;i++)
	{
		scanf("%d",&a);
		m[a-1]++;
	}
	
	for(i=0;i<9;i++) if(m[i]>=4) break;
	
	if(m[i]<4||m[i]>6) printf("Alien");
	
	else
	{ 
		m[i]-=4;
		a=0;
		b=0;
		
		for(i=0;i<9;i++)
		{
			if(m[i]==1 && a==0) a=i;
			else if(m[i]==1) b=i;
		}
		
		if(a==b) printf("Elephant");
		else printf("Bear");
	}

return 0; //ADDED
}
