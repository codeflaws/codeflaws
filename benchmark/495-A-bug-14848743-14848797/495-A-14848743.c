#include<stdio.h>
int main(int argc, char *argv[])
{
    int arr[10]={2,6,2,3,3,3,2,5,1,2};
    int n;
    scanf("%d",&n);
    int r=n%10;
    n=n/10;
    int ans=arr[n]*arr[r];
    printf("%d\n",ans);
    return 0;
}
