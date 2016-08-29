#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i,j,t;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        if(a[i]<a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;

    }
    if(k>n)
        {printf("-1");
    return(0);
        }
        printf("%d %d",a[k-1]-1,a[k-1]-1);
        return(0);
}
