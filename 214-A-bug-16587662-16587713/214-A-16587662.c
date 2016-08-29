#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	
	int n,i,j=0,k,m,l,a,b;
	scanf("%d%d",&n,&m);
	
	if(n>=m)i=m; else i=n;
	for(a=0;a<=i;a++)
	{
	b=n-a*a;
	
	if(b>0&&a+(b*b)==m)j++;
	    
	   //printf("%d ",b); 
	    //printf("%d\n",a+(b*b));
	}
	printf("%d",j);
	return 0;
}

