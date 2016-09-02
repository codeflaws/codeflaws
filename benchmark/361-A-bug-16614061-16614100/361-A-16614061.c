#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	int n,i,k,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    if(i==j)printf("%d ",k);
	    printf("\n");
	}
	
	
	return 0;
}

