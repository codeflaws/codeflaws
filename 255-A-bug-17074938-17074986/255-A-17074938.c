#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,a[30],sum1=0,sum2=0,sum3=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<n;i=i+3)
    {
        sum1=sum1+a[i];
    }

    for(i=1;i<n;i=i+3)
    {
        sum2=sum2+a[i];
    }
    if(sum2>sum1)

    for(i=2;i<n;i=i+3)
    {
        sum3=sum3+a[i];
    }
    if(sum1>sum2&&sum1>sum3)
        printf("chest");
        if(sum2>sum1&&sum2>sum3)
        printf("biceps");
        if(sum3>sum1&&sum3>sum2)
        printf("back");

return 0;
}
