#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i;
    long long int a[50],j,l,temp;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=1;i<n;i++)
    {
    l=i;
    j=i-1;
    while(j>0&&a[j]>a[l])
    {
      temp=a[j]  ;
      a[j]=a[l];
      a[l]=temp;
      j--;l--;
    }
    }
    if(k>n )
    {
       printf ("-1");
    }
    else
    {
        printf("%lld %lld",a[n-k],a[n-k]);
    }
    return 0;
}
