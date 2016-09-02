#include<stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int arr[3];
    int i;
    int max[3];
    int min[3];
    for(i=0;i<3;i++)
        {
            scanf("%d %d",&min[i],&max[i]);
        }
    int sum=0;

    for(i=0;i<3;i++)
    {
        arr[i]=min[i];
        sum+=arr[i];
    }
    int diff=n-sum;

    for(i=0;i<3;i++)
    {
       if(max[i]<=diff)
       {
           arr[i]=max[i];
           diff=diff-max[i]+min[i];
       }
       else
       {
           arr[i]=min[i]+diff;
           diff=0;
       }
    }
    for(i=0;i<3;i++)
        printf("%d ",arr[i]);
    return 0;
}
