#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ sum=sum+i;
	if(sum==n){printf("Yes"); break;}
	    
	    
	}
	if(i>n)printf("NO");
	return 0;
}

