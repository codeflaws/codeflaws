#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int *a,n,x,y,p=0,k;
    scanf("%lld",&n);
    a=(long long int*)malloc(n*sizeof(long long int));
    for(x=0;x<n;x++)
    scanf("%lld",&a[x]);
    y=a[0];
    for(x=1;x<=n-1;x++)
    {
        if(a[x]<y)
        {
            k=y-a[x];

            p=p+k;
        }
        y=a[x];
    }
     printf("%lld",p);
     return(0);
}
