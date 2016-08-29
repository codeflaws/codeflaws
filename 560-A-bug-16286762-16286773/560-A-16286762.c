#include <stdio.h>
int main(int argc, char *argv[])  
{ 
    int n,a[1005],i,m,t;
    while(~scanf("%d",&n))
    {
    	t=9999999;
    	for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]<t)t=a[i];
    	}
    	if(t>1){
	    	printf("%d\n",t-1);
	    	continue;
	    }
	    else printf("-1\n");
    }
    return 0;  
}  