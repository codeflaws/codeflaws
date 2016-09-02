#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	
	
	int n,i,j,k,l,m;
	scanf("%d",&n);
	int arr[n+1],brr[n+1],crr[n+1],drr[n+1];
	for(i=1;i<=n;i++)
	{ scanf("%d",&arr[i]);
	brr[i]=0;
	crr[i]=0;
	drr[i]=0;
	    
	}
	j=0;
	for(i=1;i<=n;i++)
	{
	    brr[arr[i]]++;
	    if(brr[arr[i]]>1){drr[j]=i;j++;}
	    if(arr[i]>n){drr[j]=i;j++;}
	    
	    
	}
	l=0;
	for(i=1;i<=n;i++)
	{if(brr[i]==0){crr[l]=i;l++;}
	    
	    
	    
	} j=0;
for(i=1;i<=n;i++)
{
    if(i==drr[j]){arr[i]=crr[j]; j++;}
    
    
}
	for(i=1;i<=n;i++)printf("%d ",arr[i]);
	
	
	
	
	
	
	
	return 0;
}

