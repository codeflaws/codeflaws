#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,tem;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
    int count=0;
    for(i=1; i<n; i++)
    {
        if(a[i]-a[i-1]==1)
            count++;
        else
            count=0;
        if(count==2)
        {
            printf("YES\n");
            return 0;
        }
    }
    if(i>=n)
        printf("NO\n");
    return 0;
}
