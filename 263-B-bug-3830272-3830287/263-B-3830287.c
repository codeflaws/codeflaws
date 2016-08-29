#include<stdio.h>
int main(int argc, char *argv[])
{
    int n ,k,i,j ;
    scanf("%d %d",&n,&k);
    long a[n],temp;
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {

        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
    if(k>n)
    {
        printf("-1");
        return 0;
    }
    else
    {
        printf("%ld %ld",a[k-1],a[k-1]);
        return 0;
    }
    return 0;
}
