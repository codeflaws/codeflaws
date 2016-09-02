#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,m,n,temp,arr[40];
    scanf("%d",&n);
    for(i=1;i<=3;i++)
    arr[i]=0;
    arr[n]=1;
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&m,&n);
        temp=arr[m];
        arr[m]=arr[n];
        arr[n]=temp;
    }
    for(i=1;i<=3;i++)
    if(arr[i]==1)
    printf("%d",i);
    return 0;
}
