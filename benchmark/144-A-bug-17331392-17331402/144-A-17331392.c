#include<stdio.h>

int main(int argc, char *argv[])

{
    int n,a[110],i,j=0,k=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            {
                max=a[i];
                j=i;
            }
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<=min)
            {
                min=a[i];
                k=i;
            }
    }
    printf("%d %d\n",j,k);
    if(j>k)
        sum=(j-0)+(n-1-k)-1;
    else
        sum=(j-0)+(n-1-k);
    printf("%d",sum);

    return 0;
}
