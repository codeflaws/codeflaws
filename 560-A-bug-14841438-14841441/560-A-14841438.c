#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k;
    scanf("%d",&a[0]);
    k=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",a[i]);
        if(k>a[i])
        {
            k=a[i];
        }
    }
    if(k==1)
    {
        printf("-1\n");
    }
    else
    {
        printf("1\n");
    }
    return 0;
}
