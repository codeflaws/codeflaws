#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,l,x,line=0;
	short k,j,i,g=0;
	scanf("%d %hd",&l,&k);
	
	for(i=1;i<=l;i++)
	{
		bool z[11]={0};
	    scanf("%d",&n);
		while(n!=0)
		{
		x=n%10;
		if(x<=k)
		  z[x]++;
		n=n/10;	
		}
		for(j=0;j<=k;j++)
			{
				if(!z[j])
					break;
				else
					g++;
			}
			if(g>=k+1)	
				line++;
	}
	
	printf("%hd",line);
		
	
	
	
	
	
	return 0;
}