#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a[100000],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            sum++;
    }
    printf("%d",sum);
    return(0);
}
