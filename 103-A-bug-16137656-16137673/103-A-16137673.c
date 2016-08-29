#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	
	int n,i;
	scanf("%d",&n);
	long long int a,sum=0;
	if(n==1){scanf("%I64d",&a); printf("%I64d",a);}
	else {for(i=0;i<n;i++)
	{
	    scanf("%I64d",&a);
	    if(a==1)
	    sum=sum+a;
	    else sum=sum+a+(a-1)*i;
	    
	} printf("%I64d",sum); 
	}
	
	return 0;
}

