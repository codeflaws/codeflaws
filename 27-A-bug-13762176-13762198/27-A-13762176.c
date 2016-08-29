#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}