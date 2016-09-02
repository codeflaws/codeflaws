#include <stdio.h>
# define max 1000

int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}

int main(int argc, char *argv[])
{
    int n,i,sum=0,c=0,m=max;
    scanf("%d",&n);
    int k=2*n-1;
    
    int arr[k];
    for(i=0;i<k;i++)
    {
    scanf("%d",&arr[i]);
    
    if(arr[i]<0)
    {
        c++;
        arr[i]=-arr[i];
        sum=sum+arr[i];
    }
    else
    sum=sum+arr[i];
    
    m=min(m,arr[i]);
    }
    
    if(c>n)
    printf("%d",sum-2*m);
    else
    printf("%d",sum);
    return 0;
    
}
