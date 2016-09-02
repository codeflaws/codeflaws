#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[2*n+1];
    int i;
    for(i=0;i<2*n+1;i++)
        scanf("%d",&arr[i]);
    i=1;
    while(i<2*n&&k!=0)
    {
        if(arr[i]-arr[i+1]>1&&arr[i]-arr[i-1])
        {
            k--;
            arr[i]--;
            i+=2;
        }
        else i+=2;
    }
    for(i=0;i<2*n;i++)
        printf("%d ",arr[i]);
    printf("%d",arr[i]);

    return 0;
}
