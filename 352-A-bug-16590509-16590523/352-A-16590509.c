#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	
	int n,i,j=0,k,l,temp1;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{scanf("%d",&k);
	    if(k==5)j++;
	    
	}l=n-j;
	while(j>0)
	{
	    temp1=j*5;
	    
	    if(temp1%9==0)break;
	    else j--;
	    
	    
	}
	
	if(j>8){
	    
	    for(i=1;i<=j;i++)printf("5");
	    for(i=1;i<=l;i++)printf("0");
	}
	else if(l>=1)printf("0");
	else printf("-1");
	return 0;
}

