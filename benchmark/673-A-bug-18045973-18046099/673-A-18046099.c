#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,min=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[0]>15)
        {
            min=15;
            break;
        }
        if (a[i]>75)
        {
            min=90;
            break;
        }
        if (a[i+1]-a[i]>15)
        {
            min=a[i]+15;
            break;
        }

    }
    printf("%d",min);
    return 0;
}
